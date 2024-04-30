#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int gcd(int x, int y);

int main()
{
    int gvalue;
    int a, b, again=1;

    while (again) {
        printf("Enter the 2 number : ");
        scanf("%d %d", &a, &b);
        gvalue = gcd(a, b);
        printf("gcd(%d, %d) = %d \n", a, b, gvalue);
        printf("Continue?(1/0)");
        scanf("%d", &again);
    }
}

int gcd(int x, int y){
    int tmp;
    while (y != 0){
        tmp = y;
        y = x%y;
        x = tmp;
    }
    return x;
}