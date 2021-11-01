//
// Created by 20043 on 2021/06/21.
//

#include <stdio.h>

int main(void) {
    char a[255] = "abcdefghijklmnopqrstuvwxyz";
    printf("char a[255]=\"%s\"\n    &a[0]=%#lx\n", a, (long) a);
    printf("    a[5],   a[6] : %c %c\n", a[5], a[6]);
    printf("    a[5],   a[6] : %#x %#x\n", a[5], a[6]);
    printf("    *(a+5),   *(a+6) : %#x %#x\n", *(a + 5), *(a + 6));
    printf("    &a[5],   &a[6] : %#lx %#lx\n", (long) &a[5], (long) &a[6]);
    printf("    (a+5),   (a+6) : %#lx %#lx\n", (long) (a + 5), (long) (a + 6));


}