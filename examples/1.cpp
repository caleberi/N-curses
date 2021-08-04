#include <iostream>
#include "ncurses.h"

int main()
{
    initscr();
    addch('H');
    addch('E');
    addch('L');
    addch('L');
    addch('0');
    addch('!');
    getch();
    endwin();
}