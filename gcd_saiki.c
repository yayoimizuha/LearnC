//
// Created by 20043 on 2021/06/07.
//
#include "stdio.h"

int gcd(int a, int b);

int main(void) {
    int a;
    printf("a?");
    scanf("%d", &a);
    int b;
    printf("b?");
    scanf("%d", &b);
    printf("%dと%dの最大公約数は%d", a, b, gcd(a, b));
}

int gcd(int a, int b) {
    if (a % b == 0) return b;
    return gcd(b, a % b);
}