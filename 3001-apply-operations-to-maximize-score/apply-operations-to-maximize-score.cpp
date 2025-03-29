#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int maxN = 1e5 + 1;

vector<int> primes;
vector<bool> isPrime(maxN, true);

void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < maxN; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = 2 * i; j < maxN; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

long long modExp(long long base, long long exp) {
    long long res = 1;
    while(exp > 0) {
        if(exp & 1)
            res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

bool sieveDone = false;

class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int n = nums.size();
        if (!sieveDone) {
            sieve();
            sieveDone = true;
        }
        vector<int> primeScores(n, 0);
        for (int i = 0; i < n; i++) {
            int x = nums[i];
            int score = 0;
            for (int p : primes) {
                if ((long long)p * p > x) break;
                if (x % p == 0) {
                    score++;
                    while(x % p == 0)
                        x /= p;
                }
            }
            if (x > 1) score++; 
            primeScores[i] = score;
        }
        vector<int> left(n, -1), right(n, n);
        {
            stack<int> st;
            for (int i = 0; i < n; i++) {
                while (!st.empty() && primeScores[st.top()] < primeScores[i])
                    st.pop();
                left[i] = st.empty() ? -1 : st.top();
                st.push(i);
            }
        }
        {
            stack<int> st;
            for (int i = n - 1; i >= 0; i--) {
                while (!st.empty() && primeScores[st.top()] <= primeScores[i])
                    st.pop();
                right[i] = st.empty() ? n : st.top();
                st.push(i);
            }
        }

        vector<long long> freq(n, 0);
        for (int i = 0; i < n; i++) {
            freq[i] = (long long)(i - left[i]) * (right[i] - i);
        }

        priority_queue<vector<long long>> pq;
        for (int i = 0; i < n; i++) {
            pq.push({nums[i], freq[i]});
        }
        long long ans = 1;
        while (k > 0 && !pq.empty()) {
            vector<long long> cand = pq.top();
            pq.pop();
            long long num = cand[0];
            long long count = cand[1];
            long long ops = min((long long)k, count);
            ans = (ans * modExp(num, ops)) % MOD;
            k -= ops;
        }
        
        return ans;
    }
};
