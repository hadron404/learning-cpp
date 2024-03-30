#include <iostream>
#include "../tools/printer.h"

/*
 * https://www.geeksforgeeks.org/cpp-program-for-quicksort/
 */
// int partition(int arr[], int start, int end) {
//     using namespace std;
//     int pivot = arr[start];
//
//     int count = 0;
//     for (int i = start + 1; i <= end; i++) {
//         if (arr[i] <= pivot)
//             count++;
//     }
//
//     // Giving pivot element its correct position
//     int pivotIndex = start + count;
//     swap(arr[pivotIndex], arr[start]);
//
//     // Sorting left and right parts of the pivot element
//     int i = start, j = end;
//
//     while (i < pivotIndex && j > pivotIndex) {
//         while (arr[i] <= pivot) {
//             i++;
//         }
//
//         while (arr[j] > pivot) {
//             j--;
//         }
//
//         if (i < pivotIndex && j > pivotIndex) {
//             swap(arr[i++], arr[j--]);
//         }
//     }
//
//     return pivotIndex;
// }
//
// void sort(int arr[], int start, int end) {
//     // base case
//     if (start >= end)
//         return;
//
//     // partitioning the array
//     int p = partition(arr, start, end);
//
//     // Sorting the left part
//     sort(arr, start, p - 1);
//
//     // Sorting the right part
//     sort(arr, p + 1, end);
// }

/*
 * For consistency's sake,we'll always select the right-most value to be our pivot(althought we can
 * technically choose other values).
 */
int partition2(int array[], int start, int end) {
    int pivotPosition = end;
    int pivot = array[end];
    end -= 1;
    while (true) {
        while (array[start] < pivot) {
            start += 1;
        }
        while (array[end] > pivot) {
            end -= 1;
        }
        // 书上的算法，不加这段，在有重复元素的列表，算法会死循环。
        if (array[start] == array[end]) {
            start += 1;
        }
        if (start > end) {
            break;
        }
        std::swap(array[start], array[end]);
    }
    std::swap(array[start], array[pivotPosition]);
    return start;
}

void sort(int array[], int start, int end) {
    if (end - start <= 0)
        return;
    int pivotPosition = partition2(array, start, end);
    sort(array, start, pivotPosition - 1);
    sort(array, pivotPosition + 1, end);
}
int main() {
    int size = 20;
    int array[size] = {7, 8, 2, 5, 3, 1, 6, 9, 4, 5, 2, 8, 9, 5, 6, 7, 1, 59, 56, 5};
    // int size = 6;
    // int array[size] = {0,5,2,1,6,3};
    sort(array, 0, size - 1);
    printArray(array, size);
}
