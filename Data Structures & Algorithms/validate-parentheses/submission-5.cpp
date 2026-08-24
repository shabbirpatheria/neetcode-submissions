class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        map<char, char> paranMap = {
            {'}', '{'},
            {']', '['},
            {')', '('}
        };
        for(char c : s){
            if(paranMap[c]){
                if(st.empty() || st.top() != paranMap[c]){
                    return false;
                }
                st.pop();
            }else{
                st.push(c);
            }
        }
        return st.empty();
    }
};
