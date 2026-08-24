class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> newSet(nums.begin(), nums.end());
        vector<int> newVec(newSet.begin(), newSet.end());
        nums = newVec;
        return nums.size();
    }
};