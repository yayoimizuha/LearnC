//
// Created by 20043 on 2021/09/13.
//

#include "stdio.h"

void selection_sort(int *data, int size);

int main(void) {
    int i;
    int data[7] = {46, 22, 34, 74, 85, 44, 56};
    int data_length = 7;
    for (i = 0; i < data_length; i++) {
        printf(" %d", data[i]);
    }
    printf("\n");
    selection_sort(data, 7);
    for (i = 0; i < data_length; i++) {
        printf(" %d", data[i]);
    }
    printf("\n");

    return 0;
}

void selection_sort(int *data, int size) {
    int i, j, swap;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (data[i] < data[j]) {
                swap = data[i];
                data[i] = data[j];
                data[j] = swap;
            }
        }
    }
}