//
// Created by 20043 on 2021/05/10.
//

#include "stdio.h"

void locate(int x, int y);

void color(int x);

int main(void) {
    printf("TEST 1");
    locate(1, 10);
    color(46);
    printf("TEST 2");
    printf("TEST 3");
    color(0);
}

void locate(int x, int y) {
    printf("\x1b[%02d;%02dH", x, y);
}

void color(int x) {
    printf("\x1b[%02dm", x);
}
