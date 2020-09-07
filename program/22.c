//Write a program in C to calculate the sum of the series:
//1+(1+2)+(1+2+3)+….+(1+2+…+n). [Multi. Ministry-2017]
#include<stdio.h>
int  main()
{
    int i,n,sum=0,Tsum=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
        Tsum=Tsum+sum;
    }
    printf("%d",Tsum);
    return 0;

}
