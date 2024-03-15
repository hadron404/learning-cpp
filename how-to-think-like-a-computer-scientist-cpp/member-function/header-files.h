struct Time {
    int hour, minute;
    double second;

    Time::Time(double secs);

    Time::Time(int hour, int min, double secs);


    void increment(double secs);

    void print() const;

    bool after(const Time &time2) const;

    Time(add const Time & t2) const;

    double converToSeconds() const;

};