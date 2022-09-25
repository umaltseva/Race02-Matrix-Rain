#include "../inc/header.h"

void print_col(wchar_t *col, int rows, int x, int iterations) {
    for (int i = rows - 1; i >= 0; i--) {
        if (iterations > 20) {
            set_color(randomizer(6, 2, 1));
        }
        else {
            set_color(2);
        }
        if (col[i] != ' ') {
            col[i] = get_japanese();
        }
        mvprintw(i, x * 2, "%lc", col[i]);
    }
}
