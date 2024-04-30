#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define DNUM 50
#define random(n) rand() % n
#define randomize() srand((unsigned int)time(NULL))

int main()
{
    int data[DNUM], i, psum = 0, nsum = 0;

    randomize();
    for (i = 0; i < DNUM; i++){
//        data[i] = random(100) + random(100) / 100.0;
//        printf("%6.2f ", data[i]);
//        if ((i+1)%7 ==0){
//            printf("\n");
//        }
        data[i] = -100 + random(201);
    }

    for (i = 0; i < DNUM; i++) {
        printf("%5d ", data[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
        if (data[i] > 0) {
            psum = psum + data[i];
        }
        else {
            nsum = nsum + data[i];
        }
    }
    printf("\nSum of positive number : %d\n", psum);
    printf("Sum of negative number : %d\n", nsum);
}
