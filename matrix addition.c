#define row  3
#define col  3
#include <stdio.h>    
int main() {
    
    int a[row][col], b[row][col],c[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("Enter a[%d][%d]=", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("Enter b[%d][%d]=", i,j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matrix A is => \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B is => \n");

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
           printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Matrix Of A+B is => \n");

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
           printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
