#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int find_kthdata(int a[], int n, int k);
void print_data(int a[], int n);

 int main() {
    int list[] = { 95, 30, 80, 70, 100, 10, 90, 50, 77, 60, 97 };
    int n = sizeof(list) / sizeof(int), k, data;

    print_data(list, n);
    printf("Enter k = ");
    scanf("%d", &k);
    data = find_kthdata(list, n, k);                         // 함수호출
    printf("\n --------------------------------  \n");
    printf("%dth data = %d\n", k, data);
    print_data(list, n);
}

void print_data(int a[], int n) {

    int i;
    for (i = 0; i < n; i++)
        printf("%d [%d] \n", i, a[i]);
}

int find_kthdata(int a[], int n, int k) {
    int s, m, j, temp;
    for (s=0; s<k; s++) {
        m = s;
        for (j = s + 1; j < n; j++)
            if (a[j]<a[m]) m = j;
        temp = a[s];  a[s] = a[m];  a[m] = temp;
    } /* for */
    return a[s-1];
}
