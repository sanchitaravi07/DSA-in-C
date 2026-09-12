#include<stdio.h>
void main()
{
    int i,j,arr[]={2,7,4,9,6,3},temp;
    for (i=0,j=5; i<j; i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }


}