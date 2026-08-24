class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for(const auto& s : strs){
            vector<int> hash_vector(26,0);
            for(char c : s){
                hash_vector[c - 'a']++;
            }
            string hash_string = to_string(hash_vector[0]);
            for(int i = 1; i < 26; i++){
                hash_string += ',' + to_string(hash_vector[i]);
            }

            res[hash_string].push_back(s);
        }

        vector<vector<string>> result;
        for(pair i : res){
            result.push_back(i.second);
        }

        return result;
    }
};
