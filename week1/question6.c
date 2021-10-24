#include<stdio.h>
int main()
{
    char day_no;
    printf("Please enter the day no \n");
    scanf("%c",&day_no);
    
    switch(day_no)
    {
        case '1':
        printf("Sunday");
        break;
        case '2':
        printf("Monday");
        break;
        case '3':
        printf("Tuesday");
        break;
        case '4':
        printf("Wednesday");
        break;
        case '5':
        printf("Thursday");
        break;
        case '6':
        printf("Friday");
        break;
        case '7':
        printf("Saturday");
        break;
        default:
        printf("Please enter the correct day no");
    }
    return 0;
}