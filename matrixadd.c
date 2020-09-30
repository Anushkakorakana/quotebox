#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r1,c1;
    printf("enter no.of rows and column for 1st");
    scanf("%d %d",&r1,&c1);
    int* arr1[r1];
    int* arr2[r1];
    int* arr3[r1];
    for(int i=0;i<r1;i++)
    {
        arr1[i]=(int*)malloc(c1*sizeof(int));
        arr2[i]=(int*)malloc(c1*sizeof(int));
        arr3[i]=(int*)malloc(c1*sizeof(int));
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("enter elements of 2nd array");

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
           arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
           printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    
}