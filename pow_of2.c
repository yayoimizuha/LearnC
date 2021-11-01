//
// Created by 20043 on 2021/04/19.
//

#include "stdio.h"
#include "math.h"

int power(int base, int n);

int main(void) {
    int a, i;
    a = 2;
    for (int i = 0; i < 10; i++) {
        printf("%4dの%4d乗は%4d\n", a, i, power(a, i));
    }
    return 0;
}

int power(int base, int n) {
    int i, p;
    p = 1;
    for (int i = 0; i < n; i++) {
        p = p * base;
    }
    return p;
}