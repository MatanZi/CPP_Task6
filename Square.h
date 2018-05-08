//
// Created by Matan Zilka on 5/8/2018.
//

#ifndef TASK6_CPP_SQUARE_HPP
#define TASK6_CPP_SQUARE_HPP


#include <ostream>
#include "IllegalCoordinateException.h"
#include "IllegalCharException.h"

class Square {
private:
    char _square;

public:
    //------------------------ Constractor -------------------------------
    Square();

    Square(char _square);

    //------------------------ Getters andSetters-------------------------
    char getSquare() const;

    void setSquare(char sign);

    //------------------------------ Function -----------------------------
    operator char() const;

    //------------------------------ Operators ----------------------------
    friend std::ostream &operator<<(std::ostream &os, const Square &square);

    bool operator==(const Square &square) const;

    bool operator==(const char sign) const;

    bool operator!=(const Square &square) const;

    void operator=(const char square);

};


#endif //TASK6_CPP_SQUARE_HPP
