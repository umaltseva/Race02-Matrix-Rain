#include "../inc/header.h"

bool wake_up(bool screensaver) {
    char *mas[4];
    mas[0] = "Wake up , Neo..";
    mas[1] = "The Matrix has you..";
    mas[2] = "Follow the white rabbit";
    mas[3] = "Knock, knock, Neo";
    refresh();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < mx_strlen(mas[i]); j++)
        {
            mvaddch(5, j + 4, mas[i][j] | COLOR_PAIR(1) );
            refresh();
            usleep(150000);
            nodelay(stdscr,TRUE);
            char ch = getch();

            if ((screensaver && ch != -1)
                || (!screensaver && ch == 'q')) {
                 return false;
            }
        }
    usleep(300000);
    clear();
    }
    return true;
}
