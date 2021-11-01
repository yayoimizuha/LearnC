//
// Created by tomokazu on 2021/11/01.
//


#include "stdio.h"


struct products {
    int no;
    char *name;
    int price;
};

int b_search(struct products *data, int size, int key);

int main(void) {
    struct products a[7] = {10, "pen", 50,
                            11, "book", 200,
                            12, "notebook", 100,
                            13, "ruler", 100,
                            14, "pencil", 50,
                            15, "eraser", 50,
                            16, "clip", 20};
    int i, k, sum;
    k = b_search(a, 7, 12);
    printf("商品価格: ￥%d\n", a[k].price);
    printf("商品名: %s\n", a[k].name);
}

int b_search(struct products *data, int size, int key) {
    int pos, top, tail;
    top = 0;
    tail = size - 1;
    pos = size / 2;
    while (data[pos].no != key) {
        if (data[pos].no > key)tail = pos - 1;
        else if (data[pos].no < key) top = pos + 1;
        if (pos == (top + tail) / 2)return -1;
        pos = (top + tail) / 2;
    }
    return pos;
}