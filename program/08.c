//How many bits have to change to convert int A to intB.?
/*Input : a = 10, b = 20
Output : 4
Binary representation of a is 00001010
Binary representation of b is 00010100
We need to flip highlighted four bits in a
to make it b.*/
#include<stdio.h>
int main(){
    int i,a,b,ans,arr[10],count=0,len=0;
    //int len=sizeof(arr)/sizeof(arr[0]);
    scanf("%d %d" ,&a,&b );
    ans=a^b;
    for(i=0;ans>0;i++){
        arr[i]=ans%2;
        len++;
        ans=ans/2;
    }
    printf("%d\n" ,len);
    for(i=0;i<len;i++){
        if(arr[i]==1){
            count++;
        }
    }
    for(i=0;i<len;i++){
        printf("%d " ,arr[i]);
    }
    printf("\n%d" ,count);

return 0;
}
