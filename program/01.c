/*Write a program to find whether the given number is an Armstrong number or
not? [ICML(AP)-2019]*/
//Armstrong is a number that is equal to the sum of cubes of its digits
/*153 = (1*1*1)+(5*5*5)+(3*3*3)
where:
(1*1*1)=1
(5*5*5)=125
(3*3*3)=27
So:
1+125+27=153*/

#include<stdio.h>
int main()
{
    int n,sum=0,mod;
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        mod=n%10;
        n=n/10;
        sum=sum+(mod*mod*mod);
    }
    if(temp=sum)
    {
        printf("Armstrong");
    }
    else
        printf("Not Armstrong");

    return 0;

}
