#include <stdio.h>

int lsearch(int *data, int size, int key);

int main(void) {
    int key, spot, d_len;
    int data[7] = {46, 22, 34, 74, 85, 44, 56};
    d_len = 7;
    printf("Please input number.");
    scanf("%d", &key);
    spot = lsearch(data, d_len, key);
    if (spot < 0)
        printf("input data not found.\n");
    else
        printf("found data: %d  in %d\n", key, spot);


}

int lsearch(int *data, int size, int key) {
    int i;
    for (i = 0; i < size; i++) {
        if (data[i] == key)
            return i;
    }
    return -1;
}

