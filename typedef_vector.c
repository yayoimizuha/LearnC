//
// Created by tomokazu on 2021/11/01.
//


#include <stdio.h>
#include <math.h>

typedef float scalar;
typedef struct {
    scalar x;
    scalar y;
} vector;

float vector_size(vector a);

vector vector_sum(vector a, vector b);

vector vector_diff(vector a, vector b);

float vector_inner_product(vector a, vector b);

float vector_angle(vector a, vector b);

int main(void) {
    float x1, y1, x2, y2;
    printf("X1?");
    scanf("%f", &x1);
    printf("Y1?");
    scanf("%f", &y1);

    printf("X2?");
    scanf("%f", &x2);
    printf("Y2?");
    scanf("%f", &y2);

    vector vector1 = {x1, y1};
    vector vector2 = {x2, y2};

    printf("ベクトルの大きさ(1):%f\n", vector_size(vector1));
    printf("ベクトルの大きさ(2):%f\n", vector_size(vector2));

    printf("ベクトルの和:{%f,%f}\n", vector_sum(vector1, vector2).x, vector_sum(vector1, vector2).y);

    printf("ベクトルの差:{%f,%f}\n", vector_diff(vector1, vector2).x, vector_diff(vector1, vector2).y);

    printf("ベクトルの和:%f\n", vector_inner_product(vector1, vector2));

    printf("ベクトルのなす角:%4.1f°\n", vector_angle(vector1, vector2));


}

float vector_size(vector a) {
    return sqrtf(fabsf(a.x * a.y));
}

vector vector_sum(vector a, vector b) {
    vector tmp = {a.x + b.x, a.y + b.y};
    return tmp;
}

vector vector_diff(vector a, vector b) {
    vector tmp = {a.x - b.x, a.y - b.y};
    return tmp;
}

float vector_inner_product(vector a, vector b) {
    return a.x * b.x + a.y * b.y;
}

float vector_angle(vector a, vector b) {
    if (vector_inner_product(a, b) == 0.0) return 90;
    return acosf((vector_inner_product(a, b) / vector_size(a)) / vector_size(b));

}