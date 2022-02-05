class Solution {
public:
    vector<int> result;
    void decompress(int freq,int value)
    {
        for(int i=0;i<freq;i++)
        {
            result.push_back(value);
        }
    }
    vector<int> decompressRLElist(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i+=2)
        {
            int freq=nums[i];
            int value=nums[i+1];
            decompress(freq,value);
        }
        return result;
    }
};
