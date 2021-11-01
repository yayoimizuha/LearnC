//
// Created by 20043 on 2021/05/17.
//

//
// Created by 20043 on 2021/05/10.
//

#include "stdio.h"

int main(void) {
    int l;
    scanf("%d", &l);
    int i = 0, r = 1;
    while (i != l) {
        i++;
        for (int j = 2; j < i; ++j) {
            if (i % j == 0) {
                r = 0;

            }
            if (l < 2 * j) {
                r = 1;
            }
        }

        if (r == 1) {
//            printf("%dは素数\n",i);

        } else {
            printf("%d\t*\t%d\n", i, l / i);

        }
        r = 1;
    }
}
