#include <stdio.h>

int main()
{
    float cel, fah;
    int n = 0;
    printf("Input Selcious Temperture : ");
    while (cel> -50) {
        scanf("%f",&cel);
        n++;
        fah = cel* (9 / 5.0) + 32;
        printf("Fahrenheit temperature : %.2f\n", fah);
        printf("Input new Selcious Temperature :");
    }
    printf("%d data processed ...", n);
}
