#include <stdio.h>
#define CRT_SECURE_NO_WARNINGS

int main()
{
    int call_number, m, r, k, ans;
    printf("How many divisions should we play? ");
    scanf("%d", &m);
    printf("\nStart: Answer with the nearest number divisible by %d\n", m);
    for (k = 0; k < 5; k++) {
        printf("\nCallNumber = ");
        scanf("%d", &call_number);
        r = call_number % m;
        if ((m - r) < r){
            ans = call_number + (m - r);
        }else{
            ans = call_number - r;
        }
        printf("\nTheanswer is %d\n", ans);
    }
}