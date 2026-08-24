class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> newVec;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i]!=nums[i+1]){
                newVec.push_back(nums[i]);
            }
        }
        nums = newVec;
        return nums.size();
    }
};