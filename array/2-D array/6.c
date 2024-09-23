// write a program in c to input two matrix after that check both matrix are equal or not.
#include<stdio.h> 
void main()
{
    int ar[3][3],arr[3][3],i,j,flag=1;
    printf("enter element of first array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    printf("\nenter element of second array:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(ar[i][j]!=arr[i][j])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1){
        printf("Both matrix are equal");
    }
    else{
        printf("Both matrix are not equal");
    }
}