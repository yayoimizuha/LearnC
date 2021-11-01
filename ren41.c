//
// Created by 20043 on 2021/04/12.
//

//
// Created by 20043 on 2021/04/12.
//
#include "stdio.h"

int main(void) {
    int i = 0;
    char a[256];
    gets(a);
    while (a[i] != '\0') {
        printf("%c", a[i]);
        i++;
    }
    printf("\n");
    printf("%d文字", i);
    return 0;
}

