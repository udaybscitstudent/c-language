//write a program in c to input 10 numbers after that find sum of even and odd.

#include<stdio.h>
int main(){
    int arr[10] , i ,esum=0, osum=0;
    printf("enter 10 numbers:");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        if(arr[i]%2==0){
            esum=esum+arr[i];
        }
        else{
            osum = osum+arr[i];
        }
    }
    printf("sum of even numbers=%d\nsum of odd numbers=%d",esum,osum);
    return 0;
}