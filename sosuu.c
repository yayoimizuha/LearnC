//
// Created by 20043 on 2021/05/10.
//

#include "stdio.h"
//int main(void){
//    int l;
//    scanf("%d",&l);
//    int i=0,r=1;
//    while (i!=l){
//        i++;
//        for (int j = 2; j < i; ++j) {
//            if(i%j==0){
//                r=0;
//            }
//        }
//        if(r==1){
//            printf("%dは素数\n",i);
//        }
//        r=1;
//    }
//}

//#include "stdio.h"
//int main(void){
//    long i;
//    scanf("%ld",&i);
//    long r=1;
//        for (long j = 2; j < i; ++j) {
//            if(i%j==0){
//                r=0;
//            }
//        }
//        if(r==1){
//            printf("%ldは素数\n",i);
//        } else{
//            printf("%ldは素数じゃない\n",i);
//        }
//        r=1;
//
//}
int a(void) {
    long i;
    scanf("%ld", &i);
    long r = 1;
    for (long j = 2; j < i; ++j) {
        if (i % j == 0) {
            r = 0;
        }
    }
    if (r == 1) {
        printf("%ldは素数\n", i);
    } else {
        printf("%ldは素数じゃない\n", i);
    }
    r = 1;

}

int b(void) {
    int l;
    scanf("%d", &l);
    int i = 0, r = 1;
    while (i != l) {
        i++;
        for (int j = 2; j < i; ++j) {
            if (i % j == 0) {
                r = 0;
            }
        }
        if (r == 1) {
            printf("%dは素数\n", i);
        }
        r = 1;
    }
}

int main(void) { b(); }