// Platform : Leetcode 
// Problem : Remove duplicates from sorted array 
// Difficulty : Easy 
// TC : O(N)
// SC : O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n= nums.size();
        if(n<=2) return n;

        int j=2;
        for(int i=2 ;i<n;i++) {
            if(nums[i] != nums[j-2]) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    } 
};
