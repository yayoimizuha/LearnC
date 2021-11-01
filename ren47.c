//
// Created by 20043 on 2021/05/10.
//

#include "stdio.h"

void locate(int x, int y);

void color(int x);

int main(void) {

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 8 - i; ++j) {
            printf(" ");
        }
        color(34);
        for (int j = 0; j < i * 2 + 1; ++j) {
            printf("*");
        }
        color(0);
        for (int j = 0; j < 8 - i; ++j) {
            printf(" ");
        }
        printf("\n");
    }
}

void locate(int x, int y) {
    printf("\x1b[%02d;%02dH", x, y);
}

void color(int x) {
    printf("\x1b[%02dm", x);
}
