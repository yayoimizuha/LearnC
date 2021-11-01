//
// Created by 20043 on 2021/05/10.
//

#include "stdio.h"

int gcd(int x, int y);

int main(void) {
    int a, b;
    printf("a?");
    scanf("%d", &a);
    printf("b?");
    scanf("%d", &b);
    printf("%d , %d \'s GCD is %d", a, b, gcd(a, b));
}

int gcd(int x, int y) {
    int ans = 1, r = 1;
    r = x % y;
    ans = y;
    while (r != 0) {
        x = y;
        y = r;
        ans = r;
        r = x % y;
    }
    return ans;
}