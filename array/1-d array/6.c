//write a program in c to input 10 numbers and enter any searching value after that check no is available or not.

#include<stdio.h>
int main(){
    int arr[10] , i ,s,f=0;
    printf("enter 10 numbers:");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nenter searching value:");
    scanf("%d",&s);

    for(i=0;i<10;i++){
        if(arr[i]==s)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("\nsearching is found at %d position",i+1);
    }
    else{
        printf("\nsearching value is not found");
    }

    return 0;
}