//Write a program to evaluate the series : [DBBL-2018]
//1*3 + 2*5 + 3*7 + …. + n*(2n+1)
#include<stdio.h>
int main()
{
    int i,n,sum=0,ans;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        ans=(i*((2*i)+1));
        sum=sum+ans;
    }
    printf("%d",sum);

    return 0;
}
