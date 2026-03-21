// Platform : takeuforward
// Problem : intersection of two sorted arrays
// Difficulty : Easy
// TC : O(n1+n2)
// SC : O(n1+n2)

#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    int i = 0, j = 0;
    vector<int> result;

    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] == nums2[j]) {
            // avoid duplicates
            if (result.empty() || result.back() != nums1[i]) {
                result.push_back(nums1[i]);
            }
            i++;
            j++;
        }
        else if (nums1[i] < nums2[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    return result;
}

int main() {
    vector<int> nums1 = {1, 2, 2, 3, 4};
    vector<int> nums2 = {2, 2, 3, 5};

    vector<int> ans = intersection(nums1, nums2);

    for (int x : ans) {
        cout << x << " ";
    }
}
