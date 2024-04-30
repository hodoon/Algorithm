#include <stdio.h>
#define CRT_SECUTE_NO_WARNINGS
#define DNUM 100

int main(){
    int n, scores[DNUM], i, sum, over_count;
    double avg;

    sum=0;
    printf("The number of data to be processed");
    scanf("%d", &n);
    printf("Enter %d data : \n", n);
    for(i=0; i<n; i++){
        scanf("%d", &scores[i]);
        sum+=scores[i];
    }
    avg = (double)sum/n;
    printf("The average of the data is %f\n", avg);

    over_count = 0;
    for(i=0; i<n; i++) {
        if(scores[i] > avg) {
            over_count++;
        }
    }
    printf("The number of scores over the average is %d\n", over_count);
}
