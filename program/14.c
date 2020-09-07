/*Write a program to find out the number of occurence of a digit in a number.
Explanation if input value n and selection value is d. [DBBL-2018]*/
#include<stdio.h>
int main()
{
    int i,n,count=0,ans,k,arr[10],len=0;
    scanf("%d %d",&n,&k);
    while(n>0)
    {   if(k==n%10){
            count++;
        };
        n=n/10;
    }
    printf("%d" ,count);
    return 0;
}
