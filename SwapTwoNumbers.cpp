#include<iostream>
using namespace std;

int main()
{
    int num1=5, num2=10, temp=0;
    cout<<"before swapping."<<endl;
    cout<<"num1="<<num1<<", num2="<<num2<<endl;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"after swapping."<<endl;
    cout<<"num1="<<num1<<", num2="<<num2<<endl;

    return 0; 
}
