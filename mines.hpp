#ifndef MINES_HPP
#define MINES_HPP

#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()
#include <cstdlib>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>

class Cell {
private:
    bool m_is_mine;
    bool m_is_open;
    char m_value;
    bool m_is_now;
    
public:
    Cell( bool is_mine = false, char value = '0', bool is_now = false);
    Cell(const Cell& rhs) = delete; 
    Cell(Cell&& rhs) = delete;
    ~Cell() = default;
    bool getIsMine() const;
    bool getIsOpen() const;
    char getValue() const;
    void setOpen(bool is_open);
    void setMine(bool is_mine);
    void setValue(char value);
    bool getIsNow() const;
    void setNow();
};

class Board{
private:
    short m_width;
    short m_height;
    short m_mines;
    Cell** m_grid;
    bool m_is_lose;
public:
    Board(short width,short height,short mines);
    void createBoard();
    bool isValidPosition(int row,int col);
    bool checkLose();
    bool checkWin();
    void openAction(short x, short y);
    void calculateMine(short x, short y);
    void display(); 
    bool moveNow(short& x, short& y);
};


class Game
{
private:
    bool gameOver;
    bool is_lose;
    Board board;
public:
    Game(short width, short height, short countMine);
    void play();
private:
    bool inputAction(short& row, short& col);
    void display(bool flag);
    void setTextColor(int colorCode);
};


void setInputMode();
void resetInputMode();
#endif