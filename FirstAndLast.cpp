#include<iostream>
using namespace std;

int main()
{
    int a[50],size;
    cout<<"Enter array size(Max:50):";
    cin>>size;
    cout<<"\nEnter array element :";
    for(int i=0;i<size;i++)
    {
        cout<<"\nEnter arr["<<i<<"]element :";
        cin>>a[i];
    }
    cout<<"\nFirst number :"<<a[0]<<endl;
    cout<<"\nLast number :"<<a[size-1]<<endl;

    return 0;
}
