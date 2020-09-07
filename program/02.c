//Write a program to reverse a string. [ICML(AP)-2019]
#include<stdio.h>
void reverseString(){
    char n;
    scanf("%c" ,&n);
    if(n!='\n'){
        reverseString();
        printf("%c" ,n);
    }


}
int main(){
    reverseString();
    return 0;
}
