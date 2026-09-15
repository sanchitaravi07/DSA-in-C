#include<stdio.h>
void main()
{
    int i,arr[]={10,25,7,30,18,5},count=0;
    for(i=0;i<=5;i++)
    {
        if(arr[i]>15)
        {
            count++;
        }
    }
    printf("Numbers greater than 15 is:%d",count);
}