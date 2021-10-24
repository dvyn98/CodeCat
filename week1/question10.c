#include<stdio.h>
int main()
{
    int base;
    float hra,da,gross;
    printf("Please enter base salary \n");
    scanf("%d",&base);
    if(base<=10000)
    {
    hra=(base*20)/100;
    da=(base*80)/100;
    }
    else if(base<=20000)
    {
    hra=(base*25)/100;
    da=(base*90)/100;    
    }
    else if(base>20000)
    {
    hra=(base*30)/100;
    da=(base*95)/100;
    }
    gross= base+hra+da;
    printf(" HRA %f \n",hra);
    printf(" DA %f \n",da);
    printf("%f is gross salary",gross);
    return 0;

}