#include<stdio.h>
int main()
{
    int phy,chem,bio,math,comp;
    float total=0,percen=0,av;
    printf("Please enter your phy marks \n");
    scanf("%d",&phy);
    printf("Please enter your chemistry marks \n");
    scanf("%d",&chem);
    printf("Please enter your bio marks \n");
    scanf("%d",&bio);
    printf("Please enter your maths marks \n");
    scanf("%d",&math);
    printf("Please enter your computer marks \n");
    scanf("%d",&comp);
    total=phy + chem + bio + math + comp;
    av=total/500;
    percen=av*100;
    printf("You scored %f percent marks \n",percen);
    if(percen>=90)
    {
    printf("A Grade");
    }
    else if(percen>=80 && percen<90)
    {
    printf("B Grade");
    }
    else if(percen>=70 && percen<=80)
    {
    printf("C Grade");
    }
    else if(percen>=60 && percen<=70)
    {
    printf("D Grade");
    }
    else if (percen>=50 && percen<=60)
    {
    printf("E Grade");
    }
    else
    {
        printf("F Grade");
    }

    return 0;

}