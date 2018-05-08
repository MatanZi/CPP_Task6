//
// Created by Matan Zilka on 5/8/2018.
//

#include "IllegalCoordinateException.h"

IllegalCoordinateException::IllegalCoordinateException(int row, int col) : _row(row), _col(col) {}

string IllegalCoordinateException::theCoordinate()const {
    return "Row = " + to_string(_row) +" , Col = " +to_string(_col);
}