class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int curr_largest = arr[arr.size() - 1];
        for(int i = arr.size() - 1; i >= 0; i--){
            if (i == arr.size() - 1){
                arr[arr.size() -1] = -1;
            }else{
                int temp = curr_largest;
                curr_largest = max(arr[i], curr_largest);
                arr[i] = temp;
            }
        }
        return arr;
    }
};