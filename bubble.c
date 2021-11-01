//
// Created by 20043 on 2021/10/04.
//
#include <stdio.h>

void bubble_sort(int *data, int size) {
    int i, j, swap;
    for (i = 1; i < size; i++) {
        j = i;
        while (data[j - 1] < data[j]) {
            swap = data[j - 1];
            data[j - 1] = data[j];
            data[j] = swap;
            j--;
            if (j < 1)break;
        }
    }
}

int main(void) {
    int i;
    int data[7] = {46, 22, 34, 74, 85, 44, 56};
    int data_length;
    data_length = 7;
    for (i = 0; i < data_length; i++) {
        printf("\t%d", data[i]);
    }
    printf("\n");
    bubble_sort(data, data_length);

    for (i = 0; i < data_length; i++) {
        printf("\t%d", data[i]);
    }
    return 0;
}
