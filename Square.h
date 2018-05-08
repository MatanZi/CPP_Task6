//
// Created by Matan Zilka on 5/8/2018.
//

#ifndef TASK6_CPP_SQUARE_HPP
#define TASK6_CPP_SQUARE_HPP


#include <ostream>

class Square {
private:
    char _square;

public:
    //------------------------ Constractor -------------------------------
    Square();

    Square(char _square);

    //------------------------ Getters andSetters-------------------------
    char getSquare() const;

    void setSquare(char square);

    //------------------------------ Function -----------------------------
    operator char() const;

    //------------------------------ Operators ----------------------------
    friend std::ostream &operator<<(std::ostream &os, const Square &square);

    bool operator==(const Square &rhs) const;

    bool operator!=(const Square &rhs) const;

    void operator=(const char square);
};


#endif //TASK6_CPP_SQUARE_HPP
