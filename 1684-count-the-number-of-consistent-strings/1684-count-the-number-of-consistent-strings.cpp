class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0,flag=0;
        int n=words.size();
        for(auto word:words)
        {
            flag=0;
            for(auto x:word)
                if(allowed.find(x)==string::npos)
                    flag=1;
            if(flag)
                count++;
        }
        return n-count;
    }
};

