#include "../tools/printer.h"
#include <iostream>

void sort(int array[], int size) {
    int throughpass = 0;
    while (throughpass < size) {
        int lowesNumberIdx = throughpass;
        for (int i = throughpass; i < size; ++i) {
            if (array[i] < array[lowesNumberIdx])
                lowesNumberIdx = i;
        }
        std::swap(array[lowesNumberIdx], array[throughpass]);
        ++throughpass;
        // std::cout << "The throughpass at [" << throughpass << "] :" ;
        // printArray(array, size);
    }
}


int main() {
    int array[] = {4, 2, 7, 1, 3,5,8,5,3,7};
    int size = 10;
    sort(array, size);
    // printArray(array, size);
}
