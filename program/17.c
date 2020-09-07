/*Write a program using any programming language that reads five numbers from
keyboard and display the smaller , larger and average of those numbers. BDBL-
2017]*/
#include<stdio.h>
int main()
{
    int n,i,sum=0,max,min,count=0;
    double avg;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        count++;
    }
    min=max=arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    avg=sum/count;
    printf("max=%d\nmin=%d\nAvg=%lf",max,min,avg);

    return 0;

}
