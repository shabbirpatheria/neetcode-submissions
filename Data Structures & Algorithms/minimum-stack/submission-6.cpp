//GPT Optimized Two Stack
class MinStack {
private:
    stack<int> st;
    stack<int> minStack;
public:
    MinStack() = default;
    
    void push(int val) {
        st.push(val);
        if(minStack.empty() || val <= minStack.top()){
            minStack.push(val);
        }
    }
    
    void pop() {
        if(st.top() == minStack.top()){
            minStack.pop();
        }
        st.pop();
    }
    
    int top() const {
        return st.top();
    }
    
    int getMin() const {
        return minStack.top();
    }
};
