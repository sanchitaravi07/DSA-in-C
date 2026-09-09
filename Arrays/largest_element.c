#include<stdio.h>
int main()
{
    int largest,i,arr[]={12,45,7,23,56};
    largest=arr[0];
    for(i=1;i<5;i++)
    {
        if(arr[i]> largest)
        {
            largest=arr[i];
        }
        
    }
    printf("Largest=%d",largest);
    return 0;

}