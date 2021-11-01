//
// Created by tomokazu on 2021/11/01.
//

#include <stdio.h>
#include <math.h>

typedef float scalar;
typedef struct {
    scalar x;
    scalar y;
    scalar z;
} vector;

scalar norm(vector b);

int main(void) {
    float x, y, z;
    printf("X?");
    scanf("%f", &x);
    printf("Y?");
    scanf("%f", &y);
    printf("Z?");
    scanf("%f", &z);
    vector vector = {x, y, z};
    printf("立方根:%f", norm(vector));
}

scalar norm(vector b) {
    return cbrtf(b.x * b.y * b.z);
}