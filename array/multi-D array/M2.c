// Write a program in c to input five matrix after that find sum of elements for each matrix.

#include<stdio.h>
void main()
{
    int arr[5][3][3],i,j,k,sum[3][3]={0};
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
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                sum[j][k] = sum[j][k]+arr[i][j][k];
            }
        }
    }
    printf("\nsum of all matrix\n");
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%d\t",sum[j][k]);
            }
            printf("\n");
        }
}