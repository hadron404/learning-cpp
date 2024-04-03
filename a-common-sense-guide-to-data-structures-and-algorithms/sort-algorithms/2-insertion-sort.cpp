#include "../tools/printer.h"

void sort(int array[], int size) {
    for (int i = 1; i < size; ++i) {
        int start = i;
        int temp = array[start];
        while(start > 0 && array[start-1] > temp) {
            array[start] = array[start-1];
            --start;
        }
        array[start] = temp;
    }
}


int main() {
    int size = 5;
    int array[size] = {4, 2, 7, 1, 3};
    sort(array, size);
    printArray(array, size);
}
