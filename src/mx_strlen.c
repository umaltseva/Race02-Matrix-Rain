#include "../inc/header.h"

int mx_strlen(const char *c) {
    int len = 0;    
    while (c[len] != '\0') len++;
    return len;
}

