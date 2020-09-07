//calculate cgpa
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float arr[n],sum=0.0,total=0.0,cgpa;
    for(i=0; i<n; i++)
    {
        scanf("%f",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+(arr[i]*3);
        total=total+3;
    }
    printf("cgpa: %.2f" ,sum/total);

}
