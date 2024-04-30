#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 15

int main()
{
    int n, i, j, sum=0;
    int count, row, col;
    int table[MAX_SIZE][MAX_SIZE];

    printf("Enter a number: ");
    scanf("%d", &n);

    if ( (n < 1) || n > MAX_SIZE) {
        printf("Error! size is out of range.\n");
        exit(0);
    }
    if (!(n%2)) {
        printf("Error! size is even.\n");
        exit(0);
    }

    for (i=0; i < n; i++)
        for (j=0; j < n; j++)
            table[i][j] = 0;

    i = 0; j = (n-1)/2;
    table[i][j] = 1;

    for (count = 2; count <= n*n; count++) {
        row = (i-1 < 0) ? (n-1) : (i-1); /* up */
        col = (j-1 < 0) ? (n-1) : (j-1); /* left */
        if (table[row][col])  i++;
        else {
            i = row; j = col;
        }
        table[i][j] = count;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%5d", table[i][j]);
        printf("\n");
    }
    for (j=0; j < n; j++)
        sum += table[0][j];

    printf("Row/Column/Diagonal Sum = %d\n", sum);

} /* main */