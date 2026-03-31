// Problem : assign cookies
// Platform : leetcode
// Difficulty : easy
// TC : O(N)
// SC : O(1)

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0; // pounter for children
        int j=0; //pointer for cookie
        int count=0;

        while(i<g.size() && j<s.size()) {
            if(s[j] >= g[i]) {
                i++;
                j++;
                count++;
            }
            else {
                // cookie too small try next cookie
                j++;
            }
        }
        return count;
    }
};
