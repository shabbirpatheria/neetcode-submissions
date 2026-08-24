class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, bool> numList;
        for(int i : nums){
            if(numList.find(i) != numList.end()){
                return true;
            }
            numList[i] = true;
        }
        return false;
    }
};