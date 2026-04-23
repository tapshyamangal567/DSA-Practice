// Problem : Print subarray with maximum subarray sum (extended version of above problem)
// platform = takeuforward
// difficulty = medium
// TC : O(N)
// SC : O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum =0 , start =0;
        int maxi= INT_MIN;
        int ansStart = -1;
        int ansEnd = -1;
        for(int i=0 ;i<nums.size();i++) {
               if(sum ==0) {
                start =i;
               }
               sum += nums[i];
               if( sum > maxi) {
                maxi= sum;
                ansStart = start;
                ansEnd =i;
               }
               if(sum <0) {
                sum =0;
               }
        }
        return maxi;
    }
};
