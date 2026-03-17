// Problem : Left rotate an array by d places 
// Platform : Takeuforward
// Difficulty : Easy
// TC : O(2n)
// SC : O(1)

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
          int n = nums.size();
           k = k%n;
          reverse(nums.begin() ,nums.begin() + k );
          reverse( nums.begin() + k , nums.end());
          reverse(nums.begin() , nums.end());
    }
};
