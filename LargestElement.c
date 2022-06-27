#include<stdio.h>

int lag_ele(int arr[],int num)
{
    int max_ele;
    max_ele=arr[0];
    for(int i=1;i<num;i++)
        if(arr[i]>max_ele)
            max_ele=arr[i];

    return max_ele;
}
int main()
{
    int arr[]={1,24,39,455};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Largest element of array is %d",lag_ele(arr,n));
    return 0;
}
