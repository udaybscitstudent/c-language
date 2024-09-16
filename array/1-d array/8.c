//write a program in c to input 10 numbers after that sort i ascending order.

#include<stdio.h>
int main(){
    int arr[10] , i , j,temp;
    printf("enter 10 numbers:");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[j]>arr[i])
            {
                temp = arr[j];
                arr[j] =arr[i];
                arr[i] =temp;
            }
        }
    }
    printf("All elements after sorting:");
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}