// write a program in cc to enter 10 numbers then insert new element at any particular position.

#include<stdio.h>
void main(){
    int arr[10],i, n, p;
    printf("enter 10 numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nenter new element:");
    scanf("%d",&n);
    printf("enter position where you want to insert new element:");
    scanf("%d",&p);

    for(i=9;i>=p-1;i--)
    {
        arr[i+1]=arr[i];
    }
        arr[p-1]=n;
    for(i=0;i<=10;i++)
    {
        printf("%d\t",arr[i]);
    }
}