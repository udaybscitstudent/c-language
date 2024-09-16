//write a program in c to input 10 numbers after that delete any particular element from the list.

#include<stdio.h>
int main(){
    int arr[10] ,i,pos,j;
    printf("enter 10 numbers:");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter position for delete particular item");
    scanf("%d",&pos);
    printf("\nDeleted item=%d\n",arr[pos-1]);
    for(i=pos-1;i<10;i++)
    {
        arr[i]=arr[i+1];
    }
    for(i=0;i<9;i++)
        printf("%d\t",arr[i]);
    return 0;
}