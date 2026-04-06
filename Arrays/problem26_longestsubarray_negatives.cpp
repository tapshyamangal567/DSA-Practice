// Problem : find longest subarray with givem sum k (negatives)
// Platform : takeuforward
// Difficulty : easy
// TC : O(N LOG N)
// SC : O(N)


class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n = nums.size();
        long long sum =0;
        int maxlen =0;
        map <long long, int>mpp;
        for(int i=0 ;i<n;i++) {
            sum += nums[i];
            if( sum == k) {
                maxlen = max (maxlen , i+1);
            }
            long long rem = sum -k;
            if(mpp.find(rem) != mpp.end()) {
                int len = i- mpp[rem];
                maxlen = max (maxlen , len);
            }
            if(mpp.find(sum) == mpp.end()) {
                mpp[sum] = i;
            }
        }
        return maxlen;
    }
};
