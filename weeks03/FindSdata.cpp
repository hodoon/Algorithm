#include <stdio.h>
#define NUM 30

double find_avg(int sdata[][2], int n);
int find_max(int sdata[][2], int n);
int find_rank(int sdata[][2], int n, int sid);

int main()
{
    int i, scores[NUM][2], sid, n;
    printf("Enter n :");
    scanf("%d", &n);
    printf("Input id and score : \n");
    for (i=0; i < n; i++){
        scanf("%d %d", &scores[i][0], &scores[i][1]);
    }
    printf("Avg = %.2f\n", find_avg(scores,n));
    printf("Max = %d\n", find_max(scores, n));
    printf("Input student id to be search : ");
    scanf("%d", &sid);
    printf("%d's Rank : %d\n", sid, find_rank(scores, n, sid));
}

double find_avg(int sdata[][2], int n){
    int i, sum = 0;
    for(i=0; i<n; i++){
        sum += sdata[i][1];
    }
    return (double)sum/n;
}

int find_max(int sdata[][2], int n){
    int max, i;
    max = sdata[0][1];
    for(i=0; i<n; i++){
        if(sdata[i][0] > max){
            max = sdata[i][0];
        }
    }
    return max;
}

int find_rank(int sdata[][2], int n, int sid){
    int i, score, rank;
    for(i=0; i<n; i++){
        if(sid == sdata[i][0]){
            score = sdata[i][1];
            break;
        }
    }
    rank = 0;
    for(i=0; i<n; i++){
        if(sdata[i][1] > score){
            rank++;
        }
    }
    return rank+1;
}