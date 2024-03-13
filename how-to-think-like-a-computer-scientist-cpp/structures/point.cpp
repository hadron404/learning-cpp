#include <iostream>


/**
 * a struct definition
 */
struct Point {
    double x, y;
}; // It is a common error to leave off the semi-colon at the end of a structure definition.

Point createVariablesWithType() {
    Point blank; // a conventional variable declaration
    blank.x = 1; // initialize the instance variables of tehe structure
    blank.y = 2;
    // alos initialize. the dotnotation used here is similar to the syntax for invoking a function on an object.
    return blank;
}

void accessingInstanceVariables(Point point) {
    std::cout << point.x << ',' << point.y << std::endl;
}

Point anInitialization() {
    Point blank = {3.0, 4.0};
    return blank;
}

void assignOneStructureToAnother() {
    Point p1 = {4.0, 5.0};
    Point p2 = p1;
    std::cout << p1.x << ',' << p2.y << std::endl;
}

void printPoint(Point point) {
    std::cout << point.x << ',' << point.y << std::endl;
}

void structuresAsParameters() {
    printPoint(createVariablesWithType());
}

void callByValue() {
    // pass by value
    accessingInstanceVariables(createVariablesWithType());
}

/*
 *  an alternative parameter-passing mechanism that is available in C++ is called "pass by reference".
 *  This mechanism makes it possible to pass a structure to a procedure and modify it.
 */
void reflect(Point &p) {
    double tmp = p.x;
    p.x = p.y;
    p.y = tmp;
}

/*
 * The important thing to see in this result is that any changes that reflect makes in p will also affect blank.
 * Passing structures by reference is more versatile than passing by value,befcause the callee can modify the structure.
 */
void callByReference() {
    Point blank = anInitialization();
    printPoint(blank);
    // pas by reference
    reflect(blank);
    printPoint(blank);
}


int main() {
    callByReference();
}
