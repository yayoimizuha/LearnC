//
// Created by 20043 on 2021/04/26.
//
#include "stdio.h"

int quadratic_equation(float a, float b, float c);

int main(void) {
    float a, b, c;
    printf("a?");
    scanf("%f", &a);
    printf("b?");
    scanf("%f", &b);
    printf("c?");
    scanf("%f", &c);
    printf("%d", quadratic_equation(a, b, c));
}

int quadratic_equation(float a, float b, float c) {
    int num;
    if (b * b - 4 * a * c > 0) {
        num = 2;
    } else if (b * b - 4 * a * c == 0) {
        num = 1;
    } else if (b * b - 4 * a * c < 0) {
        num = 0;
    } else {
        num = -1;
    }
    return num;
}