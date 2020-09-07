//Write down the algorithm to find out the second highest and
//second lowest element in an n-element array. [ICT Ministry-2017]
#include<stdio.h>
int main()
{
    int i,j,n,low_2nd,high_2nd,temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
        {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }
    low_2nd=arr[1];
    high_2nd=arr[n-2];
    printf("lower= %d\nhigher=  %d" ,low_2nd,high_2nd);
    return 0;

}
