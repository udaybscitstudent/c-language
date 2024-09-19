// Write a program in c to input any matrix after that print only prime element.

#include<stdio.h>
int main(){
    int arr[3][3],i,j,k,n,c=0;
    printf("\nenter 3x3 element:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nprime number\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            n=arr[i][j];
            for(k=1;k<=n;k++)
            {
                if(n%k==0)
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
    }
    return 0;
}