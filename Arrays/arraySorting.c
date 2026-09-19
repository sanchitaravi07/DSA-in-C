// To check whether the lements are sorted in ascending order.

#include<stdio.h>
void main()
{
int i,arr[]={2,5,7,6,15},n=5,sorted=1;
for(i=0;i<n-1;i++)
{
    if(arr[i]>arr[i+1])
    {
        sorted=0;
        break;
    }
}
if(sorted==1)
{
    printf("Array elements are sorted:\n");
}
else{
    printf("Array elements are not sorted.\n");
}
}