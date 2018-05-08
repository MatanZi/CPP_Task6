//
// Created by Matan Zilka on 5/8/2018.
//

#ifndef TASK6_CPP_ILLEGALCOORDINATEEXCEPTION_HPP
#define TASK6_CPP_ILLEGALCOORDINATEEXCEPTION_HPP

#include <iostream>
#include <exception>
#include <string>

using namespace std;

class IllegalCoordinateException {
private:
    int _row;
    int _col;

public:
    IllegalCoordinateException(int row, int col);

    string theCoordinate()const;
};


#endif //TASK6_CPP_ILLEGALCOORDINATEEXCEPTION_HPP
