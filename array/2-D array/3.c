// Write a program in c to input any matrix after print transpose of matrix.
#include<stdio.h>
int main(){
    int arr[3][3],i,j;
    printf("\nenter 3x3 element:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nTranspose of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}