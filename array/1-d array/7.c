//write a program in c to input 10 numbers and any particular element of the list after that count frequency of that number.

#include<stdio.h>
int main(){
    int arr[10] , i ,item,c=0;
    printf("enter 10 numbers:");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nenter any number of the list:");
    scanf("%d",&item);

    for(i=0;i<10;i++){
        if(arr[i]==item)
        {
            c++;
        }
    }
    printf("frequency of %d numbers = %d",item,c);
    return 0;
}