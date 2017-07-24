#include <iostream>

using namespace std;

class Piece{};

struct Square
{
    Piece occupant;
};

class Board{
  public:
    Board()
    {}
    ~Board()
    {}
    bool isOccupied(char c, int d);
    void capturePiece(Piece attacker, Square s);
  private:
    Square grid[8][8];
};
