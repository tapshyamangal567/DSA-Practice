// Problem : longst subarray with sum k (only for positives and zeros )
// Platform : takeuforward 
// TC : O(2N)
// SC : O(1)
// Difficutly : easy

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n  = nums.size();
        int left =0, right = 0;
        int sum = 0;
        int maxlen =0;
        while(right < n) {
            sum += nums[right];
            while(left <= right && sum > k) {
                sum -= nums[left];
                left++;
            }
            if( sum == k ) {
                maxlen = max (maxlen , right -left+1);
            }
           right++;
        }
        return maxlen;
    }
};
