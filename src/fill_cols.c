#include "../inc/header.h"

void fill_cols(wchar_t *arr) {
    if (arr[1] == ' ') {
        if (probability(3)) {
            arr[0] = get_japanese();
        }
    }
    else {
        if (probability(7)) {
            arr[0] = ' ';
        }
        else {
            arr[0] = get_japanese();
        }
    }
}
