//write a program in c to input 10 number after that print it.

#include<stdio.h>
void main(){
    int arr[10] , i;
    printf("Enter 10 numbers:");
    for(i=0;i<9;i++){
        scanf("%d",&arr[i]);
    printf("%d\t",arr[i]);
    }
}