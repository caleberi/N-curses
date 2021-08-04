#include <iostream>
#include "ncurses.h"

int main()
{
    initscr();
    noecho();
    addch('H'| A_BOLD | A_COLOR);
    addch('E');
    addch('L');
    addch('L');
    addch('0');
    addch('!');
    getch();
    endwin();
}