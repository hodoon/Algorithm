#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void selection_sort(int a[], int n);
void print_data(int a[], int n);

int main()
{
    int list[] = { 40, 30, 80, 70, 100, 10, 90, 20, 170, 60, 80 };
    int n = sizeof(list) / sizeof(int);
    print_data(list, n);
    selection_sort(list, n);
    printf("\n -------------------------------- \n");
    print_data(list, n);
} /* main */
void print_data(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++){
        printf("%d [%d] \n", i, a[i]);
    }
} /* display */

void selection_sort(int a[], int n){
    int s, m, j, tmp;

    for(s=0; s < n-1; s++) {
        m = s;
        for(j=s+1; j<n; j++){
            if(a[j] < a[m]){
                m = j;
            }
        }
        tmp = a[s];
        a[s] = a[m];
        a[m] = tmp;
    }
}