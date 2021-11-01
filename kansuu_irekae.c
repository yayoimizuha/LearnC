//
// Created by 20043 on 2021/06/14.
//

#include "stdio.h"

void swap2(int *x, int *y);

int main(void) {
    int x = 2;
    int y = 5;
    printf("before\tx=%d\ty=%d", x, y);

    swap2(&x, &y);

    printf("after\tx=%d\ty=%d", x, y);

}

void swap2(int *x, int *y) {
    int p;
    p = *y;
    *y = *x;
    *x = p;
    return;
}