// Problem : find all missing numbers in an array
// Platform : leetcode
// Difficulty : easy
// TC : O(n)
// SC :O(1)

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        for(int i=0 ; i<n;i++) {
            int val = abs(nums[i]);
            int index = val -1;

            if(nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }
        vector <int> result;
        for(int i=0 ;i<n;i++) {
            if(nums[i] > 0) {
                result.push_back(i+1);
            }
        }
        return result;
    }
};
