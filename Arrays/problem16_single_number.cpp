// Platform : takeuforward
// Problem : find the number that appears once and other elements twice 
// Difficulty : easy
// TC : O(N*2)
// SC : O(1)

class Solution{    
public:    
    int singleNumber(vector<int>& nums){
        //int count =0;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            int count =0;
            for(int j=0;j<n;j++) {
                if(nums[i] == nums[j]) {
                    count++;
                }
            }
              if(count==1) {
            return nums[i];
        }
             
        }
        
    }
};
