//
// Created by 20043 on 2021/06/21.
//

#include <stdio.h>

int sumavr(int n, int *s, float *avr);

int main(void) {
    int i, sum, s[3] = {2, 5, 10};
    float avr;
    for (i = 0; i < 3; i++) printf(" %d ", s[i]);
    printf("\n");
    sum = sumavr(3, s, &avr);
    printf("sum=%d,avr=%f\n", sum, avr);
    return 0;
}

int sumavr(int n, int *s, float *avr) {
    int i, sum = 0;
    for (i = 0; i < n; i++) sum += s[i];
    *avr = (float) sum / (float) n;
    return sum;
}