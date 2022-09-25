#pragma once

#define _DEFAULT_SOURCE

#include <unistd.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <locale.h>
#include <stdbool.h>

void mx_printint(int n);
void mx_printchar(char c);
int mx_strlen(const char *c);
void mx_printerr(const char *s);
void mx_printstr(const char *s);
int randomizer(int a, int b, int c);
bool wake_up(bool screensaver);
void set_color(int color);
wchar_t get_japanese();
bool probability(int percent);
void move_down(wchar_t *arr, int rows);
void fill_cols(wchar_t *arr);
void print_col(wchar_t *col, int rows, int x, int iterations);
void print_rain(bool screensaver);
void usage(int argc, char *argv[]);
int mx_strcmp(const char *s1, const char *s2);



