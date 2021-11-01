//
// Created by 20043 on 2021/09/06.
//

#include <stdio.h>

int b_search(int *data, int size, int key);

int main(void) {
    int key, pos;
    int data[7] = {4, 20, 46, 54, 65, 74, 86};
    char name[7][14] = {"amamo", "ide", "itou", "kashima", "katou", "kadooka", "kubota"};
    int data_length = 7;
    scanf("%d", &key);
    pos = b_search(data, data_length, key);
    if (pos < 0) printf("Data not found.\n");
    else printf("%s\n", name[pos]);
    return 0;
}

int b_search(int *data, int size, int key) {
    int pos, top, tail;
    top = 0;
    tail = size - 1;
    pos = size / 2;
    while (data[pos] != key) {
        if (data[pos] > key)tail = pos - 1;
        else if (data[pos] < key) top = pos + 1;
        if (pos == (top + tail) / 2)return -1;
        pos = (top + tail) / 2;
    }
    return pos;
}
