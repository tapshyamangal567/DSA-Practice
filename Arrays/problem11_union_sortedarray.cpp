// Platform : Leetcode
// Difficulty : Easy
// Problem : union of two sorted arrays
// TC : O(n1+n2)
// SC : O(n1+n2)

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0, j = 0;
        vector<int> result;

        while(i < n1 && j < n2) {
            if(nums1[i] < nums2[j]) {
                if(result.empty() || result.back() != nums1[i]) {
                    result.push_back(nums1[i]);
                }
                i++;
            }
            else if(nums1[i] > nums2[j]) {
                if(result.empty() || result.back() != nums2[j]) {
                    result.push_back(nums2[j]);
                }
                j++;
            }
            else { // equal case
                if(result.empty() || result.back() != nums1[i]) {
                    result.push_back(nums1[i]);
                }
                i++;
                j++;
            }
        }

        // remaining elements
        while(i < n1) {
            if(result.empty() || result.back() != nums1[i]) {
                result.push_back(nums1[i]);
            }
            i++;
        }

        while(j < n2) {
            if(result.empty() || result.back() != nums2[j]) {
                result.push_back(nums2[j]);
            }
            j++;
        }

        return result;
    }
};
