//write a program in c to input any matrix after that find smallest and greatest element.

#include<stdio.h>
void main(){
    int arr[3][3] , i, j , min,max;
    printf("enter 3 x 3 elements:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    min=max=arr[i][j];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
            if(arr[i][j]<min)
            {
                min = arr[i][j];
            }
        }
    }
    printf("largest element=%d\nsmallest element=%d\n",max,min);

}

//why feasibility study is important.
/*
a feasibility study is under taken to determine the possibility of either improving the existing system or developing a completely new system. this study helps to obtain an overview of the 
*/
//what do you mean by system requirement analysis? what are the technique used for requirement analysis ?
//explain cost benefit in detail.

