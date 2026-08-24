class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        vector<int> key(26,0);
        for(int i = 0 ; i < s.length(); i++){
            key[s[i] - 'a']++;
            key[t[i] - 'a']--;
        }
        for(int i = 0; i < 26; i++){
            if(key[i] != 0) return false;
        }
        return true;
    }
};