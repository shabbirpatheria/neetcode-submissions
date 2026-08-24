class DynamicArray {
private:
    int* arr;
    int capacity = 0;
    int size = 0;
public:
    DynamicArray(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
    }

    int get(int i) {
        if(i < size) return arr[i];
        throw out_of_range("Index out of bounds");
    }

    void set(int i, int n) {
        if(i < size) arr[i] = n;
        else throw out_of_range("Index out of bounds");
    }

    void pushback(int n) {
        if(size < capacity){
            arr[size++] = n;
        }else{
            resize();
            arr[size++] = n;
        }
    }

    int popback() {
        return arr[--size];
    }

    void resize() {
        capacity = capacity*2;
        int* newArr = new int[capacity];
        for(int i = 0; i < size; i++){
            newArr[i] = arr[i];
        }
        arr = newArr;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }
};
