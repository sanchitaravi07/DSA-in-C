#include<stdio.h>
int main()
{
    int n,i;
    int arr[]={2,7,4,9,6,3};
    int even,odd;

    even=0;
    odd=0;
    for(i=0;i<6;i++)
    {
        if (arr[i] % 2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even= %d",even);
    printf("Odd=%d",odd);
    return 0;
}