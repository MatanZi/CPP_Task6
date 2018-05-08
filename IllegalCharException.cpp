//
// Created by Matan Zilka on 5/8/2018.
//


using namespace std;

#include "IllegalCharException.h"
//----------------------------------- Constrctur -----------------
IllegalCharException::IllegalCharException(char sign) {
    this->sign = sign;
}

//---------------------------------- Functions -------------------
char IllegalCharException::theChar() const {
    return sign;
}