/**
 * encapsulation:
 * Encapsulation usually means taking a piece of code and wrapping it up in a function,
 * allowing you to tak advantage of all the things functions are good for.
 *
 * generalization:
 *Generalization mens taking something specific, like pringting multiples of 2, and making it more general,
 *like printing the multiples of any integer.
 */


#include <iostream>
using namespace std;

/*
 * generalization
 */
void printMultiples(int n, int high) {
    int i = 1;
    while (i <= high) {
        std::cout << n * i << " ";
        i = i + 1;
    }
}

void printMultTable(int high) {
    int i = 1;
    while (i <= high) {
        // printMultiples(i, high);
        printMultiples(i, i); // 可以只打印不重复的,why?
        i = i + 1;
    }
}
