/*C program to find sum of following series: [Uttara Bank(AP)-2019]
1+1/2+1/3+1/4+……1/n.*/
/*Nth term of AP is given as ( a + (n – 1)d)
Nth term of harmonic progression is reciprocal of Nth term of AP,
which is : 1/(a + (n – 1)d)*/
#include<stdio.h>
int main(){
    int n;
    double sum=0.0,i;
    scanf("%d" ,&n);
    for(i=1;i<=n;i++){
        sum=sum+(1/i);
    }
    printf("%lf" ,sum);

return 0;
}
