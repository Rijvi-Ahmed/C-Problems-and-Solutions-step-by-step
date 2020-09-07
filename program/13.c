/*A program sorts an array of integer. Write down the code that tests the sorting
algorithm of written in a program. [HBFC&KB(AP)-2018]*/
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
int main()
{
    int i,j,temp,n,ans;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
        {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d " ,arr[i]);
    }
    ans=arraySortedOrNot(arr,n);
    if(ans)
    {
        printf("\nSorted");
    }
    else
        printf("Unsorted");
    return 0;
}
