#include<bits/stdc++.h>
using namespace std;
  
void printTwoRepeatNumber(int arr[], int size)
{
    int i, j, display=0;
    int visited[size];
    for(i = 0; i < size; i++)
    {
    if (visited[i] == 1)
    {
        continue;
    }
    int count = 0;
        for(j = i + 1; j < size; j++)
        {
        if(arr[i] == arr[j])
        {
            visited[j] = 1;
            ++count;
            break;
        }
        }
        if ( (count > 0) && (display < 2)){
            ++display;
        cout<<"repeating element = "<< arr[i]<<endl;
        }
    }
}
  
int main()
{
    int arr[] = {4, 2, 5, 2, 3, 3, 4, 4, 1, 1};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    printTwoRepeatNumber(arr, arr_size);
}
