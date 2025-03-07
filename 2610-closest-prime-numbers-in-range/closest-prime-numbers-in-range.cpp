class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> primes;
        
        vector<bool> is_prime(right + 1, true);
        is_prime[0] = is_prime[1] = false;  
        for (int i = 2; i * i <= right; i++) {
            if (is_prime[i]) {
                for (int j = i * i; j <= right; j += i) {
                    is_prime[j] = false;
                }
            }
        }

        for (int i = left; i <= right; i++) {
            if (is_prime[i]) {
                primes.push_back(i);
            }
        }

        if (primes.size() < 2) {
            return {-1, -1};
        }

        int minDiff = INT_MAX;
        vector<int> closestPair(2, -1);

        for (size_t i = 1; i < primes.size(); i++) {
            int diff = primes[i] - primes[i - 1];
            if (diff < minDiff) {
                minDiff = diff;
                closestPair = {primes[i - 1], primes[i]};
            }
        }
        return closestPair;
    }
};