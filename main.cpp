#include "mines.hpp"

#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <signal.h>

void printMenu(char &difficulty)
{
    std::cout << "Choose the difficulty" << std::endl;
    std::cout << "Choose 'E' for easy . (9x9 board, 10 mines)" << std::endl;
    std::cout << "Choose 'M' for medium . (16x16 board, 40 mines)" << std::endl;
    std::cout << "Choose 'H' for easy . (16x30 board, 99 mines)" << std::endl;
    std::cin >> difficulty;
}

int main() {
    std::srand(std::time(0));
    setInputMode();
    char difficulty;
    printMenu(difficulty);


    short rows;
    short cols;
    short mines;

    switch (difficulty)
    {
    case 'E':
    case 'e':
        rows = 9;
        cols = 9;
        mines = 10;
        break;
    case 'M':
    case 'm':
        rows = 16;
        cols = 16;
        mines = 40;
        break;
    case 'H':
    case 'h':
        rows = 30;
        cols = 16;
        mines = 99;
        break;
    }
    
    Game game(rows,cols,mines);
    game.play();
    resetInputMode();
}