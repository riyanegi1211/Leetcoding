class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n=nums.size();
        int dom=nums[0],freq=1;

        for(int i=1;i<n;i++){
            if(nums[i]==dom)freq++;
            else freq--;
            if(freq==0){
                dom=nums[i];
                freq=1;
            }
        }
        int f=0;
        for(int i:nums){
            if(i==dom)f++;
        }
        int x=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==dom){
                x++;
                f--;
            }
            if(x>(i+1)/2&&f>(n-i-1)/2)return i;
        }
        return -1;
    }
};