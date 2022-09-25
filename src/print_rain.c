#include "../inc/header.h"

void print_rain(bool screensaver) {
    int x = 0;
    int y = 0;
    getmaxyx(stdscr, y, x);
    x /= 2;
    wchar_t arr[x][y];

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            arr[i][j] = ' ';
        }
    }
    
    for(int iterations = 0;; iterations++) {
        clear();
        for (int i = 0; i < x; i++) {
            move_down(arr[i], y);
            fill_cols(arr[i]);
            print_col(arr[i], y, i, iterations);
        }
        usleep(100000);
        refresh();
        
        nodelay(stdscr,TRUE);
          char ch = getch();

            if ((screensaver && ch != -1)
                || (!screensaver && ch == 'q')) {
                 break;
            }
    }
}



