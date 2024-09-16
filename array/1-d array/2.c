//write a program in c to input 10 numbers after that print only even elements.

#include<stdio.h>
int main(){
    int arr[10] , i ;
    printf("enter 10 numbers:");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        if(arr[i]%2==0){
            printf("%d\t",arr[i]);
        }
    }
    return 0;
}