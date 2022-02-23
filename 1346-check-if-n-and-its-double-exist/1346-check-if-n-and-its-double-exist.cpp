class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            int k=2*arr[i];
            for(int j=0;j<n;j++)
            {
                if(arr[j]==k && j!=i)
                    return true;
            }
        }
        return false;;
    }
};