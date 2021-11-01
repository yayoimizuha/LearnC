#include <stdio.h>

int main() {
    int sum = 0, j = 8;
    int a[8] = {10, 25, 41, 35, 33, 22, 323, 21};
    int max = a[0], min = a[0];
    for (int i = 0; i < j; ++i) {
        sum += a[i];
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }
    printf("合計:%d 平均:%3.2f 最大値:%d 最小値:%d", sum, sum / (float) j, max, min);
    return 0;
}
