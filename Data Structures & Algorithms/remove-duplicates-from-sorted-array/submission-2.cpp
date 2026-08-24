class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> newSet;
        for(int i : nums){
            newSet.insert(i);
        }
        vector<int> newVec(newSet.begin(), newSet.end());
        nums=newVec;
        return nums.size();
    }
};