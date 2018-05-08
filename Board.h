//
// Created by Matan Zilka on 5/7/2018.
//

#ifndef TASK6_CPP_BOARD_HPP
#define TASK6_CPP_BOARD_HPP

#include <iostream>
#include "Square.h"
#include "IllegalCoordinateException.h"
#include "IllegalCharException.h"
#include <vector>

using namespace std;

class Board {
private:
     Square** _board;
    int _gameSize;

public:
    //----------------------------- Constructor / Destructor ----------------------------
    Board(const size_t gameSize);

    Board(const Board& board);

    virtual ~Board();

    //----------------------------- Function --------------------------------------------

    //-------------------------------Getters and Setters--------------------------------
    Square** getBoard();

    int getGameSize() const;

    void setGameSize(int gameSize);
    //--------------------------------- Operators ---------------------------------------
    friend ostream& operator<< (ostream& os, const Board& board);

    bool operator==(const Board &rhs) const;

    bool operator!=(const Board &rhs) const;

    Board& operator=(char sign);

    Square& operator[] (vector<int> point);

    Board& operator= (const Board& board);
};


#endif //TASK6_CPP_BOARD_HPP
