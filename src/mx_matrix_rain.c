#include "../inc/header.h"

int main(int argc, char *argv[]) {
    usage(argc, argv);
    srand(time(NULL) / 2);

    setlocale(LC_ALL, "");
    initscr(); 
    curs_set(0); 
    start_color(); 
    

    if (wake_up(argc == 2)) {
        print_rain(argc == 2);
    }
    endwin();
    
    return 0;
}


