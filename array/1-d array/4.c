//write a program in c to input 10 numbers after that print all elements in reverse order.

#include<stdio.h>
int main(){
    int arr[10] , i ;
    printf("enter 10 numbers:");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("All elements in reverse order\n");
    for(i=9;i>=0;i--){
        printf("%d\t",arr[i]);
    }
    return 0;
}