class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        vector<int> charCount(26,0);

        for(char c: s){
            charCount[c - 'a']++;
        }
        for(char c : t){
            charCount[c - 'a']--;
        }

        for(int i: charCount){
            if(i != 0) return false;
        }
        return true;

    }
};
