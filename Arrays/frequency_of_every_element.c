// To find frequency of every element

#include<stdio.h>
void main()
{
    int i,j,visited[6],count,arr[]={2,5,2,8,5,2};
    for(i=0;i<=5;i++)
    {
        if(visited[i]==1)
        {
            continue;
        }
        count=0;
        for(j=0;j<=5;j++)
        {
            if(arr[j]==arr[i])
            {
                count++;
                visited[j]=1;
            }
        }
        printf("%d occure %d times\n",arr[i],count);
    }
    
}