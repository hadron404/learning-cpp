struct Time {
    int hour, minute;
    double second;


    // member-funcitons makeTime()
    /*
     * constructors: a special function that initializes the instance variables of a newly-created object.
     *
     * First,notice that the constructor has the same name as the class, and no return type. The arguments haven't changed,through.
     * Second,notice that we don't have to create a new time objet,and we don't have to return anything.
     *
     * We can refer to the new object -- the one we are constructing -- using the keyword this, or implicitly as shown here.
     */
    Time::Time(double secs) {
        hour = static_cast<int>(secs / 3600.0);
        secs -= hour * 3600.0;
        minute = static_cast<int>(secs / 60.0);
        secs -= minute * 60.0;
        second = secs;
    }
};


int main() {
    int seconds = 90;
    Time time(seconds);

    /*
     * If you define a constructor for a structure, then you have to use the constructor to initialize all new structures
     * of that tpe.The alternate syntax using squiggly-braces is no longer allowed.
     * Fortunately, it is legal to overload constructors in the same way we overloaded functions.
     * In other words,there can be more than one constructor with tthe same "name", as long as tehy take different parameters.
     * Then,when we initialize a new object he compiler will try to find a constructo that takes the appropriate parameters.
     */
    // Time currentTime = {9, 14, 30.0};
}
