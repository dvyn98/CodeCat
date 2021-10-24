#include<stdio.h>
int main()
{
    char ch;
    printf("Please enter the character :");
    scanf("%c ",&ch);
    if((ch >= 'a' && ch <= 'z' )||(ch >= 'A' &&ch <= 'Z'))
    {
    printf("'%c' is a alphabet",ch);
    }
    else if (ch>='0'&&ch<='9')
    {
     printf("'%c' is a number",ch);   
    }
    else
    {
    printf("'%c' is a special character",ch);
    }
    return 0;
}