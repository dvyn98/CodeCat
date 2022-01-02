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