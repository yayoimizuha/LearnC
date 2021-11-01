//
// Created by 20043 on 2021/06/14.
//

#include "stdio.h"

int main(void) {
    int val;
    int *ptr;
    val = 0x41;
    ptr = &val;
    printf("変数valの値は\t\t\t%#x\n", val);
    printf("変数valのアドレスは\t\t%#x\n", (int) &val);
    printf("ポインタptrの値は\t\t%#x\n", ptr);
    printf("ポインタptrのアドレスは\t%#x\n", (int) &ptr);
    printf("ポインタptrの指す値は\t%#x\n", *ptr);


}