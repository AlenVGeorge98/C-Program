#include<stdio.h>
#include<stdlib.h>

int sort(int *arr,int n)
{
    int i, j, temp, flag=0;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if( arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;


            }
        }

    }
//printing the sorted array
printf("Sorted elements: ");
for(i=0;i<n;i++)
printf(" %d",arr[i]);

//checking if the sorting is proper
for(i=1;i<n;i++)
{
    if(arr[i-1]>arr[i])
    {
        return 0;
    }
}
return 1;
}








