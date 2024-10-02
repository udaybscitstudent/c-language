// write a program in c to input 5 matrix after that print all matrix.
#include<stdio.h>
void main(){
    int arr[5][3][3],i,j,k;
    for (i=0;i<5;i++)
    {
        printf("\nenter 3x3 value of #%d array\n",i+1);
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    for (i=0;i<5;i++)
    {
        printf("\nvalue of #%d array\n",i+1);
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%d\t",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
