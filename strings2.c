//
// Created by 20043 on 2021/04/12.
//
#include "stdio.h"

int main(void) {
    int i = 0;
    char a[256] = "This is a pen";
    while (a[i] != '\0') {
        printf("%c", a[i]);
        i++;
    }
    printf("\n");
    printf("%s", a);
    return 0;
}

