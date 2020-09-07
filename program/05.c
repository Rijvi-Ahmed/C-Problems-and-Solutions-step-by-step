
/*Write a function void changeCaseAndReverese(Char *s) using c programming
language that will print the characters in the string S in reverse order and will
also change the uppercase letters to lowercase and lowercase letters to uppercase.
For example if you call changeCaseAndReverese (“Hello There”), it will print
EREHt OLLEh. [Uttara Bank(AP)-2019]*/
#include<stdio.h>
int main(){
    int i,len;
char str[100];
printf("\nEnter a string : ");
gets(str);
len=strlen(str);
for(i=len-1; i>=0;i--){
    if(str[i]>='A'&& str[i]<='Z'){
        str[i]=str[i]+32;
    }
    else if(str[i]>='a'&& str[i]<='z'){
        str[i]=str[i]-32;
    }
    printf("%c" ,str[i]);
}

return 0;
}
