#include  <iostream>

template<typename T>
int getArrayLength(T &array) {
    return sizeof(array) / sizeof(array[0]);
}

template<typename T>
void printArray(T &array) {
    using namespace std;
    int length = getArrayLength(array);
    for (int i = 0; i < length; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

template<typename T>
void sort(T &array) {
    using namespace std;
    int length = sizeof(array) / sizeof(array[0]);
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        int endIdx = length - 1;
        for (int i = 0; i < endIdx; ++i) {
            if (array[i] > array[i + 1]) {
                swap(array[i], array[i + 1]);
            }
        }
        --endIdx;
        for (int i = endIdx; i > 0; --i) {
            if(array[i] < array[i-1]) {
                swap(array[i], array[i - 1]);
                sorted = false;
            }
        }
        printArray(array);
    }
}

int main() {
    int array[5] = {4, 2, 7, 1, 3};
    sort(array);
    printArray(array);
}
