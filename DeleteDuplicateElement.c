#include<stdio.h>

int main()
{
    int arr[10],size;
    printf("Enter number of elements :");
    scanf("%d",&size);
    printf("\nEnter %d element\n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<size;k++)
                {
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
    printf("\nFinal array :");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
