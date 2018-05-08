//
// Created by Matan Zilka on 5/8/2018.
//

#include "Square.h"
//------------------------ Getters and Setters-------------------------
char Square::getSquare() const {
    return _square;
}

void Square::setSquare(char square) {
    this->_square = square;
}
//------------------------------ Function -----------------------------
Square::operator char() const {
    return getSquare();
}
//------------------------------ Operators ----------------------------
std::ostream &operator<<(std::ostream &os, const Square &square) {
    os <<square.getSquare();
    return os;
}

bool Square::operator==(const Square &square) const {
    return this->_square== square.getSquare();
}

bool Square::operator!=(const Square &square) const {
    return !(square.getSquare() == this->_square);
}

void Square::operator=(const char square) {
    setSquare(square);
}

//------------------------ Constractor -------------------------------
Square::Square(char _square) : _square(_square) {}

Square::Square() {
    _square = '.';
}
