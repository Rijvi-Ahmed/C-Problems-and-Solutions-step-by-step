//Write a program to sort a list of element using the insertion sort algorithm.
//[ICML(AP)-2019]
#include<stdio.h>
int main()
{
    int i,n,j,temp;
    scanf("%d" ,&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d" ,&arr[i]);
    }
    for(i=1; i<n; i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 &&  arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
    for(i=0; i<n; i++)
    {
        printf("%d " ,arr[i]);
    }


        return 0;

    }
