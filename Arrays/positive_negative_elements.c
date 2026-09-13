// To find number of positive and negative elements

#include<stdio.h>
void main()
{
    int i,positive=0,negative=0;
    int arr[]={2,-7,4,-9,6,-3};
    for(i=0;i<6;i++)
    {
        if(arr[i]>0)
        {
            positive++;

        }
        else
        {
            negative++;
        }
    }
    printf("Positive numbers:%d",positive);
    printf("Negative numbers:%d",negative);
}