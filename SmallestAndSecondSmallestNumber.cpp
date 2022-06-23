#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100],n;
    cout<<"enter number of elements:";
    cin>>n;
    cout<<"\n enter array:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    cout<<"smallest number :"<<arr[0]<<"\n second smallest number :"<<arr[1]<<endl;

    return 0;
}
