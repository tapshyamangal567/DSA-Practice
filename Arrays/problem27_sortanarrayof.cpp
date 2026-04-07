// Problem : sort an array containing 0 , 1 and 2
// Platform : takeuforward
// Difficulty : medium 
// TC : O(N)
// SC : O(1)

class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        int n = nums.size();
        int low =0 , mid =0 , high = n-1;

        while(mid <= high) {
            if(nums[mid] ==0) {
                swap(nums[mid] , nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid] , nums[high]);
                high--;
            }
        }
    }
};
