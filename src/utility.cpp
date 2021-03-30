#include "utility.hpp"

Quantity::Quantity(){
    hundreds = 0;
    thousands = 0;
    millions = 0;
    billions = 0;
    trillions = 0;
    max = false;
}
bool Quantity::operator<(Quantity& other) {
    if(trillions < other.trillions) return true;
    else if(trillions == other.trillions) {
        if(billions == other.billions) {
            if(millions == other.millions) {
                if(thousands == other.thousands) { 
                    if(hundreds < other.hundreds) return true;
                } else if (thousands < other.thousands) return true;
            } else if(millions < other.millions) return true;
        } else if(billions < other.billions) return true;
    }
    return false;
}
bool Quantity::operator==(Quantity& other) {
    if(trillions == other.trillions)
        if(billions == other.billions)
            if(millions == other.millions)
                if(thousands == other.thousands) 
                    if (hundreds == other.hundreds)
                        return true;
    return false;
}
Quantity Quantity::operator-(Quantity& other) {
    if(max) max = false;
    if(hundreds < other.hundreds) {
        thousands--;
        hundreds += 1000;
    }
    if(thousands < other.thousands) {
        millions--;
        thousands += 1000;
            
    }
    if(millions < other.millions) {
        billions--;
        millions += 1000;
    }
    if(billions < other.billions) {
        trillions--;
        billions += 1000;
    }
    hundreds -= other.hundreds;
    thousands -= other.thousands;
    millions -= other.millions;
    billions -= other.billions;
    trillions -= other.trillions;
    return *this;
}
Quantity Quantity::operator+(Quantity& other) {
    hundreds += other.hundreds;
    if(hundreds > 999) {
        hundreds -= 1000;
        thousands++;
    }
    thousands += other.hundreds;
    if(thousands > 999) {
        thousands -= 1000;
        millions++;
    }
    millions += other.millions;
    if(millions > 999) {
        millions -= 1000;
        trillions++;
    }
    trillions += other.trillions;
    if(trillions > 999) {
        hundreds = 0;
        thousands = 0;
        millions = 0;
        billions = 0;
        trillions = 999;
        max = true;
    }
    
    return *this;
}
Quantity Quantity::operator=(Quantity& other) {
    thousands = other.thousands;
    millions = other.millions;
    billions = other.billions;
    trillions = other.trillions;
    max = other.max;

    return *this;
}
bool Quantity::isMax(){
    return max;
}
