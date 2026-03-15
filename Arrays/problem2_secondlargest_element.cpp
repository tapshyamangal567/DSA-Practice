// Problem : second largest element in array 
// Platform : takeuforward
// Difficulty : easy
// TC : O(n)
// SC : O(1)

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest = nums[0];
        int secondlargest = -1;
        for(int i=0 ; i<nums.size();i++) {
            if(nums[i] > largest) {
                secondlargest = largest;
                largest = nums[i];
            }
            else if(nums[i] < largest && nums[i] > secondlargest) {
                secondlargest = nums[i];
            }
        }
        return secondlargest;
    }
};
