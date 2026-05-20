class Solution {
    public int getCommon(int[] nums1, int[] nums2) {
        int n = nums1.length;
        int m = nums2.length;
        int l = 0, r = 0;
        int min = 0;

        while(l < n && r < m){
            if(nums1[l] == nums2[r]){
                min = nums1[l];
                break;
            }
            else if(nums1[l]<nums2[r])
                l++;
            else 
                r++;
        }
        if (min == 0)
            return -1;
    return min;
    }
}