//
// Created by 20043 on 2021/04/26.
//
#include "stdio.h"

void locate(int x, int y);

int main(void) {
    locate(3, 3);
    printf("この文章が一番上に表示される。");
    locate(6, 6);
    printf("この文章こそが一番上に表示される。");
    locate(9, 9);
    printf("いやいやこの文章こそが一番上に表示される。");
}

void locate(int x, int y) {
    printf("\x1b[%02d;%02dH", y, x);
}
