// >write a program in c to input any matrix and search any particular element after that check no is available or not.

#include<stdio.h>
int main(){
    int arr[3][3], s, i, j, f=0;
    printf("Enter 3x3 elements:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nenter searching element:");
    scanf("%d",&s);

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr[i][j]==s)
            {
                f=1;
                break;
            }
        }
    }
    if(f==1){
        printf("\nsearching is found ");
    }
    return 0;
}