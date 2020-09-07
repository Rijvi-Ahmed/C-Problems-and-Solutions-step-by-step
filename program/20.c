/*Write a program to read the coordinates of the end points of a line and to find its
length. Use a structured variable name ‘Line’ to store the relevant information
about its end points. [Multi. Ministry-2017]*/
#include<stdio.h>
#include<math.h>
struct Line
{
    int a,b;
};
int main()
{
    struct Line l1;
    scanf("%d%d" ,&l1.a,&l1.b);
    double len;
    len=sqrt((l1.a*l1.a)+(l1.b*l1.b));
    printf("%lf",len);
    return 0;


}
