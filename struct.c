//
// Created by 20043 on 2021/10/25.
//

#include "stdio.h"

struct products {
    int no;
    char *name;
    int price;
};

int main(void) {
    struct products a = {10, "pen", 50};
    printf("商品番号: %d\n", a.no);
    printf("商品名: %s\n", a.name);
    printf("価格: %d\n", a.price);
}