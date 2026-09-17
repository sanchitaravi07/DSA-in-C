// To find the the index of the last occuring element

#include<stdio.h>
void main()
{
    int i,found=0,search=25,position,arr[]={10,25,7,30,25,5,25};
    for(i=0;i<=6;i++)
    {
        if(arr[i]==search)
        {
            found=1;
            position=i;
        }
    if(found==1)
    {
        printf("Last occurence of %d is at index %d\n",search,position);  
    }
    else{
        printf("Element not found\n");
    }
}
}