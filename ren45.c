//
// Created by 20043 on 2021/04/19.
//

#include "stdio.h"
#include "math.h"

//↓プロトタイプ宣言というものによって関数を使うときより後に記述できる
float calc_volume(int r);

float calc_surface(int r);

int main(void) {
    int radius;
    for (radius = 1; radius < 11; radius++) {
        printf("半径が%dの球の体積は%8.4f", radius, calc_volume(radius));
        printf("\t表面積は%8.4f\n", calc_surface(radius));

    }
}

//↓戻り値の型
//↓自作関数の名前
// / ↓仮関数の型と関数名
float calc_volume(int r) {
    float s;
    s = 4.0 / 3.0 * M_PI * r * r * r;
    return s;
}

float calc_surface(int r) {
    float s;
    s = 4.0 * M_PI * r * r;
    return s;
}