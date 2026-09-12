#include<stdio.h>
void main()
{
    int i,n,largest,secondLargest,temp;
    int arr[]={2,7,4,9,6,3};
    largest=arr[0];
    secondLargest=arr[1];

    if (secondLargest> largest)
    {
    temp=largest;
    largest=secondLargest;
    secondLargest=temp;
    }
    
    for(i=2;i<=5;i++)
    {
        if(arr[i]>largest)
        {
            secondLargest=largest;
            largest=arr[i];
        }
        else if (arr[i]> secondLargest)
        {
            secondLargest=arr[i];
        }

    printf("Second Largest=%d",secondLargest);        
    }
}