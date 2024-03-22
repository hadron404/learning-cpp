#include <iostream>


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

/*
 * 数组的初始化
 * 数组作为函数的参数
 * 数组的长度
 * 遍历数组
 * 数组元素的赋值
 * 打印数组
 *
 */
template<typename T>
void sort(T &array) {
    int length = getArrayLength(array);
    std::cout << "length of an array: " << length << std::endl;
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        int endIdx = length - 1;
        for (int i = 0; i < endIdx; ++i) {
            if (array[i] > array[i + 1]) {
                std::swap(array[i], array[i + 1]);
                sorted = false;
            }
        }
        printArray(array);
    }
}


int main() {
    // 数组的初始化
    int array[5] = {4, 2, 7, 1, 3};
    sort(array);
    // 打印数组
    std::cout << "final array: ";
    printArray(array);
}
