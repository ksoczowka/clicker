#pragma once

class Quantity{
 public:
    Quantity();
    bool operator<(Quantity& other);
    bool operator==(Quantity& other);
    Quantity operator-(Quantity& other);
    Quantity operator+(Quantity& other);
    Quantity operator=(Quantity& other);

    bool isMax();
 private:
    bool max;
    int hundreds;
    int thousands;
    int millions;
    int billions;
    int trillions;
};