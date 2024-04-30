#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int rbsearch(int a[], int left,int right, int key);
void selection_sort(int a[], int n);

int main()
{
    int list[] = { 82, 120, 30, 40, 5, 90, 77, 25, 45, 100, 10, 79, 31, 55, 87 }; int n = sizeof(list) / sizeof(int);
    int key, i;
    char sorted;
    printf("Is your data set sorted(y/n)?");
    scanf("%c", &sorted);
    if (sorted == 'y') selection_sort(list, n);
    printf("The data set : \n");
    for (i=0; i < n; i++) {
        printf("%5d", list[i]);
        if ((i+1)%7 == 0)
            printf("\n");
    }
    printf("\nEnter a key: ");
    scanf("%d", &key);
    if ( (i = rbsearch(list, 0, n-1, key)) != -1)
        printf("%d exist at [%d]\n", key, i+1);
    else
        printf("%d does not not exist\n", key);
} /* main */

void selection_sort(int a[], int n){
    int s, m, j, tmp;

    for(s=0; s < n-1; s++){
        m=s;
        for(j=s+1; j < n; j++){
            if(a[j] < a[m]){
                m=j;
            }
        }
        tmp = a[s];
        a[s] = a[m];
        a[m] = tmp;
    }
}

int rbsearch(int a[], int left, int right, int key){
    int mid;
    if(left < right){
        if(key > a[mid]){
            return rbsearch(a, mid+1, right, key);
        } else if(key < a[mid]){
            return rbsearch(a, left, mid-1, key);
        }else{
            return mid;
        }
    }
    return -1;

}
