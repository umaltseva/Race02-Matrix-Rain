#include "../inc/header.h"

void usage(int argc, char *argv[]) {
    if (argc > 2) {
        mx_printerr("usage: ./matrix_rain [-s]\n");
        exit(0);
    }
    else if (argc == 2 && (mx_strcmp(argv[1], "-s") != 0)) {
        mx_printerr("usage: ./matrix_rain [-s]\n");
        exit(0);
    }
}

