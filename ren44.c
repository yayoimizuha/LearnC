//
// Created by 20043 on 2021/04/19.
//

#include "stdio.h"
#include "math.h"

float power(float base, int n);

int main(void) {
    float i;
    int a;
    a = 2;
    for (float i = 0; i < 1; i += 0.1) {
        printf("%4.2fの%d乗は%4.2f\n", i, a, power(i, a));
    }
    return 0;
}

float power(float base, int n) {
    float i, p;
    p = 1;
    for (int i = 0; i < n; i++) {
        p = p * base;
    }
    return p;
}