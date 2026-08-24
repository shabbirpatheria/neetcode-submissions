class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uos;
        for(int i : nums){
            if(uos.find(i) != uos.end()){
                return true;
            }
            uos.insert(i);
        }
        return false;
    }
};