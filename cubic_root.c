//
// Created by 20043 on 2021/05/24.
//
#include "stdio.h"
#include "math.h"

float func(float x, float y);

int main(void) {
    float y;
    scanf("%f", &y);
    float a, b, c, oldc;
    a = 0;
    b = y;
    c = (a + b) / 2.0;
    for (int i = 0; i < y; ++i) {
        if ((func(a, y) * func(c, y)) <= 0) {
            b = c;
        } else {
            a = c;
        }
        oldc = c;
        c = (a + b) / 2.0;
        if (oldc == c) break;
        if (i % 10000000 == 0) {
//            printf("i=%2d\ta=%12.10f\tb=%12.10f\tc=%12.10f\n",i,a,b,c);
        }
    }
    printf("%12.10f", c);
}

float func(float x, float y) {
    return (x * x * x - y);
}
