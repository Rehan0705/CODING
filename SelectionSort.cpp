#include<iostream>
using namespace std;

int main()
{
    int small,pos,temp;
    int n[]={30,50,10,20,40};
    cout<<"Before sorting ::";
    for(int i=0;i<5;i++)
    {
        cout<<" "<<n[i];
    }
    for(int i=0;i<5;i++)
    {
        small=n[i];
        pos=i;
        for(int j=i+1;j<5;j++)
        {
            if(n[j]<small)
            {
                small=n[j];
                pos=j;
            }
        }
        temp=n[i];
        n[i]=n[pos];
        n[pos]=temp;
    }
    cout<<"\n\n After sorting::";
    for(int i=0;i<5;i++)
    {
        cout<<" "<<n[i];
    }
}
