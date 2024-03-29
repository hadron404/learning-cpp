#include <iostream>
#include "../tools/printer.h"

/*
 * For consistency's sake,we'll always select the right-most value to be our pivot(althought we can
 * technically choose other values).
 *
 */
int partition(int array[], int leftPointer, int rightPointer) {
    using namespace std;
    int pivotPointer = rightPointer + 1;
    int pivot = array[pivotPointer];
    while (leftPointer < rightPointer) {
        if (array[leftPointer] < pivot) {
            leftPointer += 1;
            continue;
        }
        if (array[rightPointer] > pivot) {
            rightPointer -= 1;
            continue;
        }
        if (array[leftPointer] > pivot && array[rightPointer] < pivot) {
            swap(array[leftPointer], array[rightPointer]);
        }
    }
    if ((leftPointer == rightPointer || leftPointer > rightPointer) && array[leftPointer] > array[pivotPointer]) {
        swap(array[leftPointer], array[pivotPointer]);
    }
    return leftPointer;
}


void sort(int array[], int leftPointer, int rightPointer, int size) {
    if (rightPointer - leftPointer <= 1) // base case
        return;
    int pivotPosition = partition(array, leftPointer, rightPointer - 2);
    printArray(array, rightPointer);
    // 选定 pivot ，将数组按pivot左右两个分区，左分区（0,pivot）,右分区（pivot,size-1）
    // sort(array, leftPointer, pivotPosition + 1,size); // pivot 左边数组进行快排
    sort(array, pivotPosition, rightPointer, size); // pivot 右边数组进行快排
}

int main() {
    int size = 15;
    int array[size] = {13, 51, 68, 4, 3, 6, 5, 65, 70, 89, 66, 69, 2, 1, 7};
    // int size = 9;
    // int array[size] = {7, 65, 70, 89, 66, 69, 51, 13, 68};
    sort(array, 0, size, size);
    printArray(array, size);
}
