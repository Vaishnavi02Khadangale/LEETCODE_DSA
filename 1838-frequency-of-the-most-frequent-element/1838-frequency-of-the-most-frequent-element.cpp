class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());   // Sort the array

        long long sum = 0;   // Sum of current window
        int left = 0;        // Left pointer
        int ans = 1;         // Maximum frequency

        for (int right = 0; right < nums.size(); right++) {

            sum += nums[right];

            // If operations needed are more than k, shrink the window
            while ((long long)nums[right] * (right - left + 1) - sum > k) {
                sum -= nums[left];
                left++;
            }

            // Update maximum frequency
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};