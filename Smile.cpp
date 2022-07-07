#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int sml=1, i, limit;
   char ch=sml;
   cout<<" smiley face you want to print : ";
   cin>>limit;
   for(i=0; i<limit; i++)
   {
      cout<<ch<<" ";
   }
   getch();
}
