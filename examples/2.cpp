#include <unistd.h>
#include  "ncurses.h"


WINDOW* create_window(int height, int width, int STARTX, int STARTY);

int main (){
    usleep(1000);
    initscr();
    WINDOW* win1, *win2;
    win1 = create_window(15,17,10,10);
    win2 = create_window(16,18,20,20);
    mvwprintw(win1,0,1,"Hello");
    // wrefresh(win1);
    mvwprintw(win1,1,1,"Greet");
    // wrefresh(win2);
    getch();
    endwin();
    return 0;
}


WINDOW* create_window(int height, int width, int STARTX, int STARTY)
{
    return  newwin(height, width, STARTX, STARTY);
}
