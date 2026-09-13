// To find the sum of only even numbers.

#include<stdio.h>
void main()
{
    int i,sum=0;
    int arr[]={2,7,4,9,6,3};
    for(i=0;i<=5;i++)
    {
        if(arr[i]%2==0)
        {
            sum=sum+arr[i];
        }
    }
    printf("Sum=%d",sum);
}