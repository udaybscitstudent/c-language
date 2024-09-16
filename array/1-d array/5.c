//write a program in c to input 10 numbers after that print highest and second highest number.

#include<stdio.h>
int main(){
    int arr[10] , i ,max, smax;
    printf("enter 10 numbers:");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    max=smax=arr[0];
    for(i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(i=0;i<10;i++){
        if(arr[i]>smax && arr[i]<max)
        smax=arr[i];
    }
    printf("largest number=%d\nSecond largest number=%d",max,smax);
    
    return 0;
}