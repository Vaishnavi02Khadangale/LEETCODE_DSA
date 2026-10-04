class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int st = 0;
        int end = nums.size() - 1;
        int i = nums.size() - 1;
        
        vector<int> ans(nums.size());
        
        while (st <= end) {
            
            if (abs(nums[st]) > abs(nums[end])) {
                ans[i] = nums[st] * nums[st];
                st++;
            }
            else {
                ans[i] = nums[end] * nums[end];
                end--;
            }
            
            i--;
        }
        
        return ans;
    }
};