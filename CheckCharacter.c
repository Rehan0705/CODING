#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Press any key:");
    ch=getchar();
    if(isalpha(ch)>0)
        printf("The character is a letter.");
    else
        if(isdigit(ch)>0)
            printf("The character is a digit.");
    else
        printf("The character is not alphanumeric.");
        
}
