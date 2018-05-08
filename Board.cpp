#include "Board.h"
#include "Square.h"
// Created by Matan Zilka on 5/7/2018.
//

#include "Board.h"
//----------------------------- Destructor ------------------------------------------

Board::Board(const size_t _gameSize) : _gameSize(_gameSize) {
    this->_gameSize = _gameSize;
    this->_board= new Square*[_gameSize];
    for (int j = 0; j < _gameSize; ++j) {
        _board[j] = new Square[_gameSize];
    }
}

Board::~Board() {
    for (int i = 0; i < _gameSize; ++i) {
        delete[](this->_board[i]);
    }
    delete[] _board;
}
//--------------------------Getters and Setters--------------------------
Square** Board::getBoard() {
    return this->_board;
}

int Board::getGameSize() const {
    return _gameSize;
}

void Board::setGameSize(int _gameSize) {
    Board::_gameSize = _gameSize;
}

//----------------------------- Function --------------------------------------------
//--------------------------------- Operators ---------------------------------------
ostream& operator<< (ostream& os, const Board& board) {
    for (int i = 0; i < board.getGameSize(); ++i) {
        for (int j = 0; j < board.getGameSize(); ++j) {
            os<<board._board[i][j].getSquare();
        }
        os<<endl;
    }
    return os;
}

bool Board::operator==(const Board &board) const {
    for (int i = 0; i < board.getGameSize(); ++i) {
        for (int j = 0; j < board.getGameSize(); ++j) {
            if(this->_board[i][j].getSquare() != board._board[i][j].getSquare())
                return false;
        }
    }
    return true;
}

bool Board::operator!=(const Board &board) const {
    for (int i = 0; i < board.getGameSize(); ++i) {
        for (int j = 0; j < board.getGameSize(); ++j) {
            if(this->_board[i][j].getSquare() == board._board[i][j].getSquare())
                return false;
        }
    }
    return true;
}

Board& Board::operator=(char sign) {
    if (sign != '.' && sign != 'X' && sign != 'O')
        throw IllegalCharException(sign);
    for (int i = 0; i < this->_gameSize; ++i) {
        for (int j = 0; j < this->_gameSize; ++j) {
            this->_board[i][j].setSquare(sign);
        }
    }
    return *this;
}

Square& Board::operator[](vector<int> coordinate) {
    if (coordinate[0] < 0 || coordinate[0] >= this->_gameSize || coordinate[1] < 0 || coordinate[1] >= this->_gameSize)
        throw IllegalCoordinateException(coordinate[0], coordinate[1]);
    return this->_board[coordinate[0]][coordinate[1]];
}

Board& Board::operator=(const Board &board) {
    this->~Board();
    this->_gameSize = board.getGameSize();
    this->_board = new Square*[this->_gameSize];
    for(size_t i = 0; i < this->_gameSize; i++)
        this->_board[i] = new Square[this->_gameSize];
    for(size_t i = 0; i < this->_gameSize; i++) {
        for(size_t j = 0; j < this->_gameSize; j++) {
            this->_board[i][j].setSquare(board._board[i][j].getSquare());
        }
    }
    return *this;
}






