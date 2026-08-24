class MinStack {
private:
    int min=INT_MAX;
    stack<int> minStack;
    stack<int> st;
public:
    MinStack() {
    }
    
    void push(int val) {
        if(val <= min){
            min = val;
            minStack.push(val);
        }
        st.push(val);
    }
    
    void pop() {
        if(st.top() == min){
            minStack.pop();
            if(minStack.empty()){
                min = INT_MAX;
            }else{
                min = minStack.top();
            }
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min;
    }
};
