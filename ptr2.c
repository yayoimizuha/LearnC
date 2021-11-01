//
// Created by 20043 on 2021/06/14.
//

#include "stdio.h"

int main(void) {
    int a;
    int *ptr = &a;
    a = 0;
    *ptr = 10;
    printf("%d", a);

    return 0;

}