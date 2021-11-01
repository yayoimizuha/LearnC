//
// Created by 20043 on 2021/05/31.
//

#include "stdio.h"

float sqr2(float n);

float absolute(float a);

int main(void) {
    printf("平方根を計算：");
    float n;
    scanf("%f", &n);
    printf("ルート%fの値は%f\n", n, sqr2(n));
    return 0;
}

float sqr2(float n) {
    float a, b;
    a = 1.0;
    b = n;
    while (absolute(a - b) > 1e-6) {
        a = b;
        b = a - (a * a - n) / (2 * a);
    }
    return b;
}

float absolute(float a) {
    if (a > 0) return a;
    return -a;
}

