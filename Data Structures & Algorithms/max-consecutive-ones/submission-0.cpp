class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_sum = 0;
        int curr_sum = 0;
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) curr_sum = 0;
            else {
                curr_sum += 1;
                max_sum = max(curr_sum, max_sum);
            }
        }
        return max_sum;
    }
};