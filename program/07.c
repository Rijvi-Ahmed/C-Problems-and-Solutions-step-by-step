/*Write a pseudocode that takes in one positive number only and returns the factor
for that number.*/

#include<stdio.h>
int main(){
int n,i;
scanf("%d" ,&n);
for(i=1;i<=n;i++){
    if(n%i==0){
        printf("%d " ,i);
    }
}

return 0;
}
