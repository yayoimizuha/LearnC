//
// Created by 20043 on 2021/05/24.
//
#include "stdio.h"

float func(float x);

int main(void) {
    float a, b, c;
    a = 1.0;
    b = 20000.0;
    c = (a + b) / 2.0;
    for (int i = 0; i < 100000000; ++i) {
        if ((func(a) * func(c)) <= 0) {
            b = c;
        } else {
            a = c;
        }
        c = (a + b) / 2.0;
        if (i % 1000 == 0) {
            printf("i=%2d\ta=%12.10f\tb=%12.10f\tc=%12.10f\n", i, a, b, c);
        }
    }
}

float func(float x) {
    return (x * x - 2);
}
