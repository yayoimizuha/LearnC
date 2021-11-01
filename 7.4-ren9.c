//
// Created by 20043 on 2021/06/07.
//

#include "stdio.h"

int kaijou(int a);

int main(void) {
    printf("階乗を計算：");
    int n;
    scanf("%d", &n);
    printf("1から%dまでの掛け算は%d\n", n, kaijou(n));
    return 0;
}

int kaijou(int a) {
    if (a == 1) return 1;
    return a * kaijou(a - 1);
}