//write a program in c to input 10 numbers after that print only prime numbers.

#include<stdio.h>
int main(){
    int arr[10] ,i,j,c=0 , n;
    printf("enter 10 numbers:");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("All prime numbers\n");
    for(i=0;i<10;i++){
        n=arr[i];
        for(j=1;j<=n;j++)
        {
            if(n%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d\t",n);
        }
        c=0;
    }
    
    return 0;
}