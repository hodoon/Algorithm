#include <stdio.h>
#define DNUM 100

int pcount(int a[], int n);
double avg(int a[], int n);
int large(int a[], int n);
int small(int a[], int n);

int main()
{
    int data[DNUM], k, n;
    printf("Number of data to process");
    scanf("%d", &n);
    printf("Enter %d number", n);
    for(k=0; k<n; k++){
        scanf("%d", &data[k]);
    }
    printf("The number of sheep is %d\n", pcount(data, n));
    printf("average data = %.2f\n", avg(data, n));
    printf("Maximum = %d\n", large(data, n));
    printf("Minimum = %d\n", small(data, n));
}

int pcount(int a[], int n){
    int i, count=0;
    for(i=0; i<n; i++){
        if(a[i] > 0){
        count++;
        }
    }
    return count;
}

double avg(int a[], int n){
    int i, sum=0;
    for(i=0; i<n; i++){
        sum += a[i];
    }
    return (double)sum/n;
}

int large(int a[], int n){
    int i, max=0;
    for(i=0; i<n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        return max;
    }
}

int small(int a[], int n) {
    int i, min = 0;
    for (i = 0; i < n; i++) {
        if(a[i] < min){
            min = a[i];
        }
    }
}