CXX=clang++-5.0
CXXFLAGS=-std=c++17
all: Board.o Square.o IllegalCoordinateException.o IllegalCharException.o
Board.o: Board.cpp Board.h Square.h
	$(CXX) $(CXXFLAGS) -c  Board.cpp -o Board.o

Square.o: Square.cpp Square.h Board.h
	$(CXX) $(CXXFLAGS) -c  Square.cpp -o Square.o

IllegalCoordinateException.o: IllegalCoordinateException.cpp IllegalCoordinateException.h
	$(CXX) $(CXXFLAGS) -c  IllegalCoordinateException.cpp -o IllegalCoordinateException.o

IllegalCharException.o: IllegalCharException.cpp IllegalCharException.h
	$(CXX) $(CXXFLAGS) -c  IllegalCharException.cpp -o IllegalCharException.o

clean:
	rm *.o