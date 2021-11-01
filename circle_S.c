//
// Created by 20043 on 2021/04/19.
//

#include "stdio.h"
#include "math.h"

//↓戻り値の型
//↓自作関数の名前
// / ↓仮関数の型と関数名
float circle_S(float r) {
    float s;
    s = M_PI * r * r;
    return s;
}

int main(void) {
    float a, b;
    a = (float) 5.0;
    b = circle_S(a/*変数aは引数*/);
    printf("半径が%4.2fの円の面積は%6.3f\n", a, b);
    return 0;
}