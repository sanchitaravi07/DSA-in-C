#include<stdio.h>
void main()
{
    int i,search,found,arr[]={10,25,7,30,25,5};
    search=25;
    found=0;
    for(i=0;i<=5;i++)
    {
        if(arr[i]==search)
        {
            printf("Element found at index:\n",i);
            found=1;
        }
        if(found==0)
        {
            printf("Element not found");
        }
    }
}