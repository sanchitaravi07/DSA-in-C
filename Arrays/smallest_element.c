#include<stdio.h>
int main()
{
    int i,smallest;
    int arr[]={12,45,7,23,56};
    smallest=arr[0];
    for(i=1;i<5;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }

    printf("Smallest =%d",smallest);
    return 0;
    
}