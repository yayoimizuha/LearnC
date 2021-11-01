//
// Created by 20043 on 2021/06/07.
//

#include "stdio.h"

int fibo(int a);

int main(void) {
    printf("n番目の値を取得：");
    int x;
    scanf("%d", &x);
    printf("%d番目のフィボナッチ数は%d", x, fibo(x));
}

int fibo(int a) {
    if (a <= 0) return 0;
    if (a == 1) return 1;
    return fibo(a - 2) + fibo(a - 1);
}