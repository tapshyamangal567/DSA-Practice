// Problem : largest element in array 
// Platform : takeuforward
// Difficulty : Easy 
// TC : O(n)
// SC : O(1)

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest = nums[0];
        for(int i=0 ;i <nums.size();i++) {
            if(nums[i] > largest) {
                largest = nums[i];
            }
        }
         return largest ;
    }
   
};
