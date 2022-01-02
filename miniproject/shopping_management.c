#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

void displayitems();
void contactus();
int menu();
void createaccount();
void login();
void cart();
//boolean isunique(char[],boolean );
//int createaccount();

void gotoxy(int x,int y)
{
        COORD c;
        c.X=x;
        c.Y=y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
        }

FILE *fp;
struct user u,U;
int choice;
char fname[20],lname[20],uname[20],pss[20],C;
struct user
{
    char pass[20];
    char username[20];
    char fname[20];
    char lname[20];
    char mobno[10];
    char email[30];
};

struct item{
    char Item_id;
    char name[30];
    int MRP;
    float disc;
    float GST;
    float Buy_price;
    
}detail;

int main()
{
    while (1)
    {
        switch (menu())
        {
        case 1:
            displayitems();
            break;
        
        

        case 2:
            createaccount();
            break;
         

        case 3:
            login();
            break;


            case 4:
            contactus();
            break;
        default:
            printf("Invalid Choice! ");
            break;
        }


    }
    
    return 0;
}
int menu()
{
    int ch;
    printf("[1] : Display Items:  \n");
    printf("[2] : Create Account:  \n");
    printf("[3] : Login:  \n");
    printf("[4] : Contact us:  \n");
    printf("   Enter your choice :  ");
    scanf("%d",&ch);
    return ch; 
}

void cart()
{

}
void logout()
{

}
void createaccount()
{
    struct user U;
    FILE *fp,*fp1;
    char usrname[30];
    system("cls");
    gotoxy(57,3);
    puts("<--<<Create Account>>-->");
    printf("\n\n");
    printf("    Enter First Name: ");
    fflush(stdin);
    scanf("%s",&U.fname);
    printf("\n");
    printf("    Enter Last Name: ");
    scanf("%s",&U.lname);
    printf("\n");
    printf("    Enter Mobile No:");
    scanf("%s",&U.mobno);
    printf("\n");
    printf("    Enter Email Address:");
    scanf("%s",&U.email);
    printf("\n");
    printf("    Enter Username: ");
    scanf("%s",&U.username);
    printf("\n");
    /*fp1=fopen("userdata.txt","r");
    while(fread(&U,sizeof(struct user),1,fp1))
    {  //printf("%s \n",U.username);
        if(strcmp(u.username,U.username)==0)
        {   
            printf("USERNAME ALREADY EXISTS \n PLEASE ENTER UNIQUE USERNAME\n");
            exit(0);

        
        }
        
    }
    fclose(fp1); 
    user *p;
    p=(user * )malloc(sizeof(user));
    strcpy(p->username[(p->count)++],usrname);
    printf("%s",p->username[(p->count)++]);
    strcpy(U.username,u.username); 
    printf("%s\n",U.username);*/
    printf("    Enter Password: ");
    scanf("%s",&U.pass);
    fp = fopen ("userdata.txt", "a+");
    if (fp == NULL)
    {
        printf("\nError opened file\n");
        exit (1);
    }
    fwrite(&U, sizeof(struct user), 1, fp);
    fclose (fp);
    system("cls");
    gotoxy(55,20);
    printf(" Account Created Successfully.");
    gotoxy(75,25);
    printf("Press any key to continue...");
    getch();
    system("cls");
}
/*boolean isunique(char username[], boolean uniq)
{
    FILE *fp1=fopen("userdata.txt","r");
while(fread(&U,sizeof(struct user),1,fp1))
    {
        printf("current value ->  %s\n uniq -> %d\n",U.username,uniq);
        if(strcmp(username,U.username)==0)
        {
            
            
            return TRUE;
           
        }
         fp1++;
    }
    uniq=0;
    return FALSE;
}*/
void login()
{
    char uname[20],pss[20];
    FILE *fp;
    struct user u;
    system("cls");
    gotoxy(53,3);
    printf("<--<<LOGIN TO YOUR ACCOUNT>>->\n\n");
    printf(" Enter Username: ");
    scanf("%s",uname);
    printf("\n");
    printf(" Enter Password: ");
    scanf("%s",pss);
    ///Reading from file
    fp=fopen("userdata.txt","r+");
    if(fp==NULL)
    {
        printf("\"Record not found\"");
        exit(0);
    }

    boolean islog=0;
    while(fread(&U, sizeof(struct user), 1, fp))
    {
            //printf("%s  %s \n",U.fname,U.lname);
        if(strcmp(uname,U.username) == 0 && strcmp(pss,U.pass)==0)
        {   islog=1;
            printf(" \n Username And Password is Correct.\n");
            printf(" Press any key to continue...");
            getch();
            gotoxy(57,12);
            printf(" Welcome %s %s \n", U.fname,U.lname);
           

            getch();
            int ch;
    printf("[1] : Display Items:  \n");
    printf("[2] : Cart:  \n");
    printf("[3] : Logout:  \n");
    printf("[4] : Contact us:  \n");
    printf("   Enter your choice :  ");
    scanf("%d",&ch);

     switch (ch)
        {
        case 1:
            displayitems();
            break;
        
        

        case 2:
            cart();
            break;
         

        case 3:
            logout();
            break;


            case 4:
            contactus();
            break;
        default:
            printf("Invalid Choice! ");
            break;
        }
        }
        
        
    }
    if(islog==0)
    {
            printf("\n Username And Password is Incorrect.\n\n");
            printf(" Press any key to continue...");
            getch();
        }
    fclose(fp);
    system("cls");
}
void displayitems()
{
	
struct item detail;
	/*FILE *fp1;
	
	int disc;
	system("clear");
	
	fp1=fopen("item.txt","a+");	

	printf("\n\tEnter Item_id ::");
	scanf("%s",&detail.Item_id);
	setbuf(stdin,NULL);

	printf("\n\t Enter Name  ::");
	scanf("%[^\n]%*c",detail.name);
	setbuf(stdin,NULL);

	printf("\n\t Enter PRICE :: ");
	scanf("%d",&detail.MRP);
	setbuf(stdin,NULL);

	
    
    if(detail.MRP>500)
    {
        detail.GST=(detail.MRP*(18))/100;
    }
    else
    {
        detail.GST=0;
    }
    printf("\n\t  GST :: %.2f",detail.GST);
	//scanf("%d",&detail.GST);
	setbuf(stdin,NULL);
    printf("\n\t Enter Discount:: ");
    scanf("%d",&disc);
    detail.MRP=detail.MRP+detail.GST;

    detail.disc=(detail.MRP*disc)/100;
	detail.Buy_price=detail.MRP-detail.disc;
    
    printf("\n\t Enter Buy_Price ::");
	printf(" %.2f",detail.Buy_price);
    //scanf("%.2f",&detail.Buy_price);
	//printf("Record not 1Inserted ! ...... \n");
	if(fp1 == NULL)
	{
	}
	else
	{  
		fprintf(fp1,"%s %s %d %.2f %.2f %.2f \n",&detail.Item_id,&detail.name,&detail.MRP,&detail.GST,&detail.disc,&detail.Buy_price);
		
        printf("\nRecord Inserted ! ...... \n");
		fclose(fp1);
	}*/
    char ch;
	FILE *ft;

	ft = fopen("item.txt","r");
    printf("\tItem_id \tName \tMRP \tDiscount \tGST \tBuy_price\n");
	while(fread(&detail,sizeof(struct item),1,ft))
    {
        printf("\t%s",detail.Item_id);
    }
    fclose(ft);  
}
void contactus()
{

}