#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[100][100], b[100][100], sum[100][100], i,  j, r, c;

    printf("Enter no. of Rows and Columns for Matrix : ");
    scanf("%d %d", &r, &c);
    
    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    
    
    
    printf("Matrix Addition\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
