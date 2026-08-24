class Solution {
public:
    bool is_valid_int(const std::string& str) {
        if (str.empty()) return false;
        
        try {
            size_t pos;
            // std::stoi converts the string and outputs the index of the first unparsed character into 'pos'
            std::stoi(str, &pos);
            
            // If 'pos' matches the string length, the entire string was a valid integer
            return pos == str.length();
        } 
        catch (const std::invalid_argument&) {
            return false; // No conversion could be performed
        } 
        catch (const std::out_of_range&) {
            return false; // The value is too large or too small for a standard int
        }
    }

    int calPoints(vector<string>& operations) {
        stack<int> scores;
        int final_score = 0;
        for(auto i : operations){
            if(is_valid_int(i)){
                int current_score = stoi(i);
                scores.push(current_score);
            }
            else if(i == "+"){
                int top1 = scores.top();
                scores.pop();
                int top2 = scores.top();
                scores.push(top1);          // restore
                scores.push(top1 + top2);
            }
            else if(i == "D"){
                if(!scores.empty()){
                    scores.push(2 * scores.top());
                }
            }
            else if(i == "C"){
                if(!scores.empty()){
                    scores.pop();
                }
            }
        }
        while(!scores.empty()){
            final_score += scores.top();
            scores.pop();
        }
        return final_score;
    }
};