// Problem : Basketball game 
// platform : leetcode
// difficulty : easy 
// TC : O(N*2)
// SC : O(1)

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector <int>st;

        for(string op : operations) {
            if(op == "+") {
                int last = st.back();
                int secondlast = st[st.size()-2];
                st.push_back(last + secondlast);
            }
            else if(op == "D") {
                st.push_back(2*st.back());
            }
            else if(op=="C") {
                st.pop_back();
            }
            else {
                st.push_back(stoi(op));
            }
        }
        int sum =0;
        for(int score : st) {
            sum += score;
        }
        return sum;
    }
};
