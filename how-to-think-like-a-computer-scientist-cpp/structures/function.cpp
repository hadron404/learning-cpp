struct Time {
    int hour, minute;
    double second;
};

/*
 * pure function:
 * Takes objects and/or basic types as arguments but does not modify the object.
 * The return value is either a basic type pr a new object created inside the function.
 *
 * In general, I recommend that you write pure functions whenever it is reasonable to do so,
 * and resort to modifiers only if there is a compelling advantage.
 * This approach might be called a functional programming style.
 */
bool after(Time &time1, Time &time2) {
    if (time1.hour > time2.hour) return true;
    if (time1.hour < time2.hour) return false;
    if (time1.minute > time2.minute) return true;
    if (time1.minute < time2.minute) return false;
    if (time1.second > time2.second) return true;
    return false;
}

Time addTime(Time &t1, Time &t2) {
    Time sum;
    sum.hour = t1.hour + t2.hour;
    sum.minute = t1.minute + t2.minute;
    sum.second = t1.second + t2.second;
    if (sum.second >= 60.0) {
        sum.second -= 60.0;
        sum.minute += 1;
    }
    if (sum.minute >= 60) {
        sum.minute -= 60;
        sum.hour += 1;
    }
    return sum;
}

/*
 * The advantage of passing by value is that the calling function and teh callee are appropriately encapsulated ----
 * it is not possiable for a change in one to affect the other,except by affecting the return value.
 * On the other hand,passing by reference usually is more efficient, because it avoids copying the argument.
 * const: declare that it is a constant reference parameter.
 *
 */


/*
 * modifier:
 * Takes object as parameters and modifies some or all of them. Often returns void.
 */

void printTime(const Time& time) {
    cout << time.hour << ":" << time.minute << ":" << time.second << endl;
}

/*
 * fill-in-function:
 * One of the parameters is an "empty" object that gets filled in by the function.
 * Technically,this is a type of modifier.
 */
