/*A prime number is a number that is evenly divided by only 1 and itself.Write a
program to your favourite language to print the first 100 prime numbers.
[Competition Commition(P)-2019]*/
#include <stdio.h>
int main()
{
    int count=0,n=0,i=1,j=1;
    while(n<100)
    {
        j=1;
        count=0;
        while(j<=i)
        {
            if(i%j==0)
            count++;
            j++;
        }
        if(count==2)
        {
            printf("%d ",i);
            n++;
        }
        i++;
}
}
