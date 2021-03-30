#pragma once

class Quantity{
 public:
    Quantity(int hund = 0, int thous = 0, int mill = 0, int bill = 0, int trill = 0, bool mx = false);
    bool operator<(Quantity& other);
    bool operator==(Quantity& other);
    Quantity operator-(Quantity& other);
    Quantity operator+(Quantity& other);

    bool isMax();
 private:
    bool max;
    int hundreds;
    int thousands;
    int millions;
    int billions;
    int trillions;
};