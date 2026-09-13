// To find the frequency element

#include<stdio.h>
void main()
{
    int i,count=0,search;
    int arr[]={2,7,4,7,6,7};
    search=7;
    for(i=0;i<6;i++)
    {
        if(arr[i]==search)
        {
            count++;
        }
    }
    printf("Count=%d",count);
    
}