//
// Created by 20043 on 2021/06/07.
//

#include "stdio.h"

int kaijou(int a);

int main(void) {
    int n = 3;
    printf("1から%dまでの掛け算は%d\n", n, kaijou(n));
    return 0;
}

int kaijou(int a) {
    if (a == 1) return 1;
    return a * kaijou(a - 1);
}