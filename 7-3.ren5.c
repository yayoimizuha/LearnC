//
// Created by 20043 on 2021/05/24.
//
#include "stdio.h"

int main(void) {
    printf("基数を入力：");
    float x;
    scanf("%f", &x);
    printf("何乗しますか：");
    int n;
    scanf("%d", &n);
    float y = 1;
    for (int i = 0; i < n; i++) {
        y = y * x;
    }
    printf("%12.10f", y);
}
