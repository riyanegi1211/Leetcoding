class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.length();
        for(int i=0;i<n;i++)
        {
            if(word[i]==ch)
            {
                int j=0,k=i;
                while(j<k)
                {
                    swap(word[j],word[k]);
                    j++;
                    k--;
                }
                break;
            }
        }
        return word;
    }
};
