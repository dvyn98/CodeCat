#include<stdio.h>
int main()
{
    int amount, total,n2000,n500,n200,n100,n50,n20,n10,n5,n2,n1;
    n2000=n500=n200=n100=n50=n20=n10=n5=n2=n1=0;
    printf("Enter amount \n");
    scanf("%d",&amount);
    if(amount>=2000)
    {
    n2000=amount/2000;
    amount=amount-(n2000*2000);
    }
    if(amount>=500)
    {
    n500=amount/500;
    amount = amount-(n500*500);
    }
    if(amount>=200)
    {
    n200=amount/200;
    amount = amount-(n200*200);
    }
    if(amount>=100)
    {
    n100=amount/100;
    amount = amount-(n100*100);
    }
    if(amount>=50)
    {
    n50=amount/50;
    amount = amount-(n50*50);
    }
    if(amount>=20)
    {
    n20=amount/20;
    amount = amount-(n20*20);
    }
    if(amount>=10)
    {
    n10=amount/10;
    amount = amount-(n10*10);
    }
    if(amount>=5)
    {
    n5=amount/5;
    amount = amount-(n5*5);
    }
    if(amount>=2)
    {
    n2=amount/2;
    amount = amount-(n2*2);
    }
    if(amount>=1)
    {
    n1=amount;
    amount = amount-n1;
    }
    total=n2000+n500+n200+n100+n50+n20+n10+n5+n2+n1;
    printf("Total no of notes: %d \n 2000Rs notes: %d \n 500Rs notes: %d \n 200Rs notes: %d \n 100Rs notes: %d \n 50Rs notes: %d \n 20Rs notes: %d \n 10Rs notes: %d \n 5Rs notes: %d \n 2Rs notes: %d \n 1Rs note: %d ",total,n2000,n500,n200,n100,n50,n20,n10,n5,n2,n1);
}