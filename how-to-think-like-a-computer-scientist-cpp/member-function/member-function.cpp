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
#include <cmath>
#include <iostream>
using namespace std;

struct Time {
    int hour, minute;
    double second;

    /*
     * a function declaration
     * When you declare a function ,you are making a promise to the compiler that you will, at some point later on in the
     * program, provide a definition for the function.
     */
    void Time::print();

    void Time::increment(double secs);

    double Time::convertToSeconds() const;

    bool Time::after (const Time& time2) const;
};

/**
 * this definition is sometimes called the implementation of the function, since it contains the details of how the
 * function works.
 *
 * Implicit varibale access:
 * Features like this are one reason member functions are often more concise than nonmember functions.
 *
 */
void Time::print() {
    // Time time = *this;
    // cout << time.hour << ":" << time.minute << ":" << time.second << endl;
    cout << hour << ":" << minute << ":" << second << endl; // Implicit varibale access
}

/*
 * exmpale
 */
void Time::increment(double secs) {
    second += secs;
    if (second >= 60.0) {
        second = fmod(second, 60.0);
        minute += (int) (second / 60.0);
    }
    if (minute >= 60) {
        hour += (int) (minute / 60.0);
        minute = minute % 60;
    }
}

/*
 * Example2
 * the insteresting things here is that the implicit parameter should be declared const,since we don't modify it
 * int his function. But it is not obvious where we should put information about a parameter that doesn't exist.
 * The answer, as you can see in the example, is after the parameter list(which is empty in this case).
 */
double Time::convertToSeconds() const {
    int minutes = hour * 60 + minute;
    double seconds = minutes * 60 + second;
    return seconds;
}


/*
 * a more complicated example
 * after operators on two Time structures,not just one, and we can't make both of them implicit.
 * Instead, we have invoke the function on one of them and pass the other as an argument.
 * Inside the function, we can refer to one of the them implicitly, but to access the instance varibales of the other
 * we continue to use dot notation.
 */
bool Time::after(const Time &time2) const {
    if (hour > time2.hour) return true;
    if (hour < time2.hour) return false;

    if (minute > time2.minute) return true;
    if (minute < time2.minute) return false;

    if (second > time2.second) return true;
    return false;
}

int main() {
    Time currentTime = {9, 7, 32};
    currentTime.print();
}
