#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DNUM 100

int find_min_delete(int a[], int n);

int main()
{
    int data[DNUM], k, n, i, fdata;

    printf("Number of data and which data to find : ");
    scanf("%d %d", &n, &k);
    // printf("Enter %d data\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &data[i]);

    for (i = 0; i < k; i++) {
        fdata = find_min_delete(data, n - i);
        printf("%dth small data = %d\n", i + 1, fdata);
    }

    printf("kthdata : %d", fdata);
}

int find_min_delete(int a[], int n)
{
    int i, min, min_index = 0;

    for (i = 1; i < n; i++)
        if (a[i] < a[min_index]) min_index = i;

    min = a[min_index];  //min이 꼭 있어야하는 이유는?
    i = min_index+1;

    while (i < n) {
        a[i-1] = a[i];
        i++;
    }
    //return a[min_index]; 이러면 왜 잘못된 값을 리턴하는가?
    return min;
}