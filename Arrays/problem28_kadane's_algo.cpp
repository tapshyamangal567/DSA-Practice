// problem : kadane's algorithm
// platform : leetcode
// TC : O(N)
// SC : O(1)
// Difficulty : medium 

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum =0 , start =0;
        int maxi= INT_MIN;
        for(int i=0 ;i<nums.size();i++) {
               if(sum ==0) {
                start =i;
               }
               sum += nums[i];
               if( sum > maxi) {
                maxi= sum;
               }
               if(sum <0) {
                sum =0;
               }
        }
        return maxi;
    }
};
