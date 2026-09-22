#include<stdio.h>
void main()
{
    int i,smallest,secondSmallest,temp,current;
    int arr[]={8,3,12,5,1,7};
    smallest=arr[0];
    secondSmallest=arr[1];
    if(smallest>secondSmallest)
    {
        temp=smallest;
        smallest=secondSmallest;
        secondSmallest=temp;
    }
    for(i=2;i<=5;i++)
    {
        current=arr[i];

        if(current>smallest && current<secondSmallest)
        {
            secondSmallest=current;
        }
        if(current<smallest)
        {
            temp=smallest;
            smallest=current;
            secondSmallest=temp;
        }
        printf("Second Smallest element is %d",secondSmallest);

    }
}