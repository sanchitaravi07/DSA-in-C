// To find the average of numbers.

#include<stdio.h>
void main()
{
    int i,total=0,avg=0;
    int arr[]={10,20,30,40,50};
    for(i=0;i<5;i++)
    {
        total=total+arr[i];
    }

    avg=total/5;
    printf("Average=%d",avg);
}