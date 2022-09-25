#include "../inc/header.h"

int randomizer(int a, int b, int c) {
    int result = ((rand() % a) + b) * c;
    return result;
}
  
