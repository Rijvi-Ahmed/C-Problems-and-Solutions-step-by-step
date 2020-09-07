//Write code to test a sorting algorithm of array?
#include<stdio.h>
int arraySortedOrNot(int arr[], int n)
{
    // Array has one or no element
    if (n == 0 || n == 1)
        return 1;

    for (int i = 1; i < n; i++)

        // Unsorted pair found
        if (arr[i - 1] > arr[i])
            return 0;

    // No unsorted pair found
    return 1;
}
int main(){
    int n,i,ans;
    scanf("%d" ,&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d" ,&arr[i]);
    }
    ans=arraySortedOrNot(arr,n);
    if(ans){
        printf("Sorted");
    }
    else
        printf("Unsorted");

    return 0;
}





