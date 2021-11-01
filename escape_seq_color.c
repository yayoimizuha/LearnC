//
// Created by 20043 on 2021/04/26.
//
#include "stdio.h"

void color(int y);

int main(void) {
    color(3);
    printf("この文章が一番上に表示される。");
    color(6);
    printf("この文章こそが一番上に表示される。");
    color(9);
    printf("いやいやこの文章こそが一番上に表示される。");
}

void color(int y) {
    printf("\x1b[%dm", y);
}
