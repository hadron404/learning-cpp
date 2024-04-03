#include <iostream>
#include "printer.h"


void printArray(const int array[], const int size) {
    using namespace std;
    for (int i = 0; i < size; ++i) {
        cout << array[i];
        if (i != size - 1) {
            cout << ",";
        }
    }
    cout << endl;
}
