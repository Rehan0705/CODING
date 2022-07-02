#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter first number :";
    cin>>a;
    cout<<"Enter second number :";
    cin>>b;
    c=a*b;
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
        
    }
    cout<<"HCF :"<<a<<endl;
    cout<<"LCM :"<<c/a<<endl;
    return 0;
}
