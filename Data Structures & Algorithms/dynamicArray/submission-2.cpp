class DynamicArray {
public:
    int capacity;
    int size = 0;
    int* arr;
    DynamicArray(int capacity) : capacity(capacity) {
        arr = new int[capacity];
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if(size == capacity){
            resize();
        }
        arr[size] = n;
        size++;
    }

    int popback() {
        return arr[--size];
    }

    void resize() {
        int* newArr = new int[capacity*2];
        for(int i =0; i < size; i++ ){
            newArr[i] = arr[i];
        }
        arr = newArr;
        capacity = capacity*2;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }
};
