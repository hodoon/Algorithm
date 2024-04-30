#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void hanoi(int n, char a, char c, char b);
long count=0;

int main(){
    int n;
    printf("Input the number of disk : ");
    scanf("%d",&n);
    if(n <= 0){
        printf("\n No Disk!\n");
    } else {
        hanoi(n, 'A', 'C', 'B');
    }
    printf("Moving count = %d\n",count);
}

void hanoi(int n, char a, char c, char b){
    if(n== 1){
        count++;
        printf("Move disk from %c to %c\n", a, c);
    } else {
        hanoi(n-1, a, b, c);
        hanoi(1, a, c, b);
        hanoi(n-1, b, c, a);
    }
}