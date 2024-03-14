/*
 * some features of object-oriented programming:
 * 1. Programs are made up of a collections of structure definitions and function definitions,where most of the functions
 * operate on specific kinds of structures (or objects).
 * 2. Each structure definition correspondsto some object or concept in the real world, and the functions that operate on
 * that structure correspond to the ways real-world objects interact.
 *
 * member function:
 *
 * member function differ from the other functions we have written in two ways:
 * 1. When we call the function, we invoke it on an object, rather than just call it. People something describe this proces
 * as "performing an operation on an object," or "sending a mesage to an object."
 * 2. The function is declared inside the struct definition, in order to make the realtionship between the structure and
 * the function explicit.
 */
#include <iostream>
using namespace std;

struct Time {
    int hour, minute;
    double second;
};

void printTime(const Time &time) {
    cout << time.hour << ":" << time.minute << ":" << time.second << endl;
}
