#include <stdio.h>
#define DNUM 100

int main(){
    int i, scores[DNUM][2], sid, score, rank, n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Input id and score : \n");
    for(i=0; i<n; i++){
        scanf("%d %d", &scores[i][0], &scores[i][1]);
    }
    printf("Input student id to be search : ");
    scanf("%d", &sid);
    rank = 0;
    for(i=0; i<n; i++){
        if(sid == scores[i][0]){
            score = scores[i][1];
            break;
        }
    }
    for(i=0; i<n; i++){
        if(scores[i][1]>score){
            rank++;
        }
    }
    printf("%d's score : %d\n", sid, score);
    printf("%d's rank : %d", sid, rank+1);
}