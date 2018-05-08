//
// Created by Matan Zilka on 5/8/2018.
//

#ifndef TASK6_CPP_ILLEGALCHAREXCEPTION_HPP
#define TASK6_CPP_ILLEGALCHAREXCEPTION_HPP

#include <iostream>
#include <exception>
#include <string>

using namespace std;

class IllegalCharException {
private:
    char sign;
public:
    //----------------------------------- Constrctur -----------------
    IllegalCharException(char sign);

    //---------------------------------- Functions -------------------
    char theChar() const;
};


#endif //TASK6_CPP_ILLEGALCHAREXCEPTION_HPP
