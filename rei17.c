//
// Created by 20043 on 2021/04/12.
//
#include "stdio.h"

int main(void) {
    int i, j, k = 0;
    int a[3][3] = {{10, 20, 15},
                   {25, 41, 35},
                   {33, 22, 11}};
    int l[3] = {0};
    for (i = 0; i < 3; i++) {
        k = 0;
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
            k += a[i][j];
            l[i] += a[j][i];
        }

        printf(" %d\n", k);
    }
    for (i = 0; i < 3; i++)printf("%d ", l[i]);
}