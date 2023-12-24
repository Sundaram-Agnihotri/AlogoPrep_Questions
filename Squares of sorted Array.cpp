class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>ans(0,n);

        for(int i=0;i<n;i++){
            ans.push_back(nums[i]*nums[i]);
        }

        sort(ans.begin(),ans.end());

        return ans;
    }
};
