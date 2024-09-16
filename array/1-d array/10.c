//write a program in c to input 10 numbers after that print reverse of digit of each number.

#include<stdio.h>
int main(){
    int arr[10] ,i, n,r,rev=0;
    printf("enter 10 numbers:");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("reverse of digit of each number:\n");
    for(i=0;i<10;i++){
        n=arr[i];
        while(n!=0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        printf("%d\t",rev);
        rev=0;
    }
    
    return 0;
}