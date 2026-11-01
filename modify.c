#include"header.h"

void roll_no(STD *ptr)
{
	char name[20];
	int found=0,std_id=0;
	char choice=0;
	STD *temp = ptr;
	
	printf("\nEnter the student ID for slecting student record : ");
	scanf("%d",&std_id);

	while(temp!=NULL)
	{
		if(temp->roll==std_id)
		{
			printf("============================\n");
			printf("Student info : \n");
			printf("============================\n");
			printf("Roll       : %d\n",temp->roll);
			printf("Name       : %s\n",temp->name);
			printf("Percentage : %.2f\n",temp->mark);
			printf("============================\n");
			
			while(1)
			{
				printf("\nModify Field\n");
				printf("[N/n] Name\n");
				printf("[P/p] Percentage\n");
				printf("Enter your choice : ");
				scanf(" %c",&choice);

				if((choice=='N')||(choice=='n'))
				{
					printf("Enter the name to modify : ");
					scanf("%s",temp->name);
					printf("Name modified successfully..\n");
					return;
				}
				else if((choice=='P')||(choice=='p'))
				{
					printf("Enter the Percentage to modify : ");
					scanf("%f",&temp->mark);
					printf("Percentage modified successfully..\n");
					return;
				}
				else
				{
					printf("Choose the correct option\n");
				}
			}
			return;
		}
		temp = temp->next;
	}
	printf("No record with the %d Roll no.\n",std_id);
}

void name(STD *ptr)
{
	char name[30];
	int found=0,std_id=0;
	char choice;
	STD *temp = ptr;
	STD *temp2 = ptr;
	STD *temp3 = ptr;
	printf("Enter the name to find and modify : ");
	scanf("%s",name);
	
	while(temp2!=NULL)
	{
		if(strcmp(temp2->name,name)==0)
			found++;
		temp2 = temp2->next;
	}
	if(found==0)
	{
		printf("Record with name %s Not found.\n",name);
		return;	
	}

	if(found>1)
	{
		printf("\nShowing matching record :\n");
		printf("======================================\n");
		printf(" %-10s %-15s %-15s\n","Roll No","Name","Percentage");
		printf("======================================\n");
		while(temp!=NULL)
		{
			if(strcmp(temp->name,name)==0)
			{
				printf(" %-10d %-15s %-10.2f\n",temp->roll,temp->name,temp->mark);
				found++;
			}
			temp = temp->next;
		}
		printf("======================================\n");
		printf("\nEnter the student ID for slecting corect student record : ");
		scanf("%d",&std_id);

		while(temp3!=NULL)
		{
			if(temp3->roll==std_id)
			{
				printf("\nStudent info : \n");
				printf("============================\n");
				printf("Roll       : %d\n",temp3->roll);
				printf("Name       : %s\n",temp3->name);
				printf("Percentage : %.2f\n",temp3->mark);
				printf("============================\n");
				
				while(1)
				{
					printf("\nModify Field :\n");
					printf("[N/n] Name\n");
					printf("[P/p] Percentage\n");
					printf("Enter the option : ");
					scanf(" %c",&choice);
	
					if((choice=='N')||(choice=='n'))
                                	{
                                	        printf("Enter the name to modify : ");
                                	        scanf("%s",temp3->name);
                                	        printf("Name modified successfully..\n");
                                	        return;
                                	}
                                	else if((choice=='P')||(choice=='p'))
                                	{
						printf("Enter the Percentage to modify : ");
                                	        scanf("%f",&temp3->mark);
                                	        printf("Percentage modified successfully..\n");
                                	        return;
                                	}
                                	else
                                	{
                                	        printf("Choose the correct option.\n");
                                	}
				}
				return;
			}
			temp3 = temp3->next;
		}
	}
	if(found==1)
	{
		while(ptr!=NULL)
		{
			if(strcmp(ptr->name,name)==0)
			{
				printf("\nStudent info : \n");
				printf("===========================\n");
				printf("Roll       : %d\n",ptr->roll);	
				printf("Name       : %s\n",ptr->name);
				printf("Percentage : %.2f\n",ptr->mark);
				printf("============================\n");
				
				while(1)
                                {
                                        printf("\nModify Field :\n");
                                        printf("[N/n] Name\n");
                                        printf("[P/p] Percentage\n");
                                        printf("Enter the option : ");
                                        scanf(" %c",&choice);

                                        if((choice=='N')||(choice=='n'))
                                        {
                                                printf("Enter the name to modify : ");
                                                scanf("%s",ptr->name);
                                                printf("Name modified successfully..\n");
                                                return;
                                        }
                                        else if((choice=='P')||(choice=='p'))
                                        {
						printf("Enter the Percentage to modify : ");
                                                scanf("%f",&ptr->mark);
                                                printf("Percentage modified successfully..\n");
                                                return;
                                        }
                                        else
                                        {
                                                printf("Choose the correct option.\n");
                                        }
                                }
				return;
			}
			ptr = ptr->next;
		}
	}	

}

void percentage(STD *ptr)
{
	float per=0;
	int found=0,std_id=0;
	char choice=0;
	STD *temp1 = ptr;
	STD *temp2 = ptr;
	STD *temp3 = ptr;
	printf("Enter the percentage to search : ");
	scanf("%f",&per);

	while(temp1!=NULL)
	{
		if(per==temp1->mark)
		{
			found++;
		}
		temp1 = temp1->next;
	}
	if(found==0)
	{
		printf("Record with the Percentage %f Not found.\n",per);
		return;
	}
	if(found==1)
	{
		while(temp2!=NULL)
		{
			if(per==temp2->mark)
			{
				printf("\nStudent info : \n");
                                printf("===========================\n");
                                printf("Roll       : %d\n",temp2->roll);
                                printf("Name       : %s\n",temp2->name);
                                printf("Percentage : %f\n",temp2->mark);
                                printf("============================\n");

				while(1)
                                {
                                        printf("\nModify Field :\n");
                                        printf("[N/n] Name\n");
                                        printf("[P/p] Percentage\n");
                                        printf("Enter the option : ");
                                        scanf(" %c",&choice);

                                        if((choice=='N')||(choice=='n'))
                                        {
                                                printf("Enter the name to modify : ");
                                                scanf("%s",temp3->name);
                                                printf("Name modified successfully..\n");
                                                return;
                                        }
                                        else if((choice=='P')||(choice=='p'))
                                        {
                                                printf("Enter the Percentage to modify : ");
                                                scanf("%f",&temp3->mark);
                                                printf("Percentage modified successfully..\n");
                                                return;
                                        }
                                        else
                                        {
                                                printf("Choose the correct option.\n");
                                        }
                                }
				return;
			}
			temp2 = temp2->next;
		}
	}
	if(found>1)
	{
		printf("\nShowing matching record :\n");
               	printf("======================================\n");
               	printf(" %-10s %-15s %-15s\n","Roll No","Name","Percentage");
               	printf("======================================\n");
               	while(temp3!=NULL)
               	{
               	        if(temp3->mark==per)
              	        {
               	                printf(" %-10d %-15s %-10.2f\n",temp3->roll,temp3->name,temp3->mark);
                        }
               	        temp3 = temp3->next;
               	}
               	printf("======================================\n");
               	printf("\nEnter the student ID for slecting corect student record : ");
       	        scanf("%d",&std_id);

		while(ptr!=NULL)
                {
                        if(ptr->roll==std_id)
                        {
                                printf("\nStudent info : \n");
                                printf("============================\n");
                                printf("Roll       : %d\n",ptr->roll);
                                printf("Name       : %s\n",ptr->name);
                                printf("Percentage : %f\n",ptr->mark);
                                printf("============================\n");
				
				while(1)
                                {
                                        printf("\nModify Field :\n");
                                        printf("[N/n] Name\n");
                                        printf("[P/p] Percentage\n");
                                        printf("Enter the option : ");
                                        scanf(" %c",&choice);

                                        if((choice=='N')||(choice=='n'))
                                        {
                                                printf("Enter the name to modify : ");
                                                scanf("%s",ptr->name);
                                                printf("Name modified successfully..\n");
                                                return;
                                        }
                                        else if((choice=='P')||(choice=='p'))
                                        {
                                                printf("Enter the Percentage to modify : ");
                                                scanf("%f",&ptr->mark);
                                                printf("Percentage modified successfully..\n");
                                                return;
                                        }
                                        else
                                        {
                                                printf("Choose the correct option.\n");
                                        }
                                }
                                return;
			}
			ptr = ptr->next;

		}
	}


}

void modify(STD *ptr)
{
	if(ptr==NULL)
	{
		printf("\nThere is no student record to modify\n");
		return;
	}
	
	char op=0;
	do
	{
		printf("\nSerach record:\n");
		printf("[R/r] Roll No\n");
		printf("[N/n] Name\n");
		printf("[P/p] Percentage\n");
		printf("[B/b] Back to main menu\n");

		printf("Enter the option : ");
		scanf(" %c",&op);

		if((op=='R')||(op=='r'))
		{
			roll_no(ptr);
		}
		else if((op=='N')||(op=='n'))
		{
			name(ptr);
		}
		else if((op=='P')||(op=='p'))
		{
			percentage(ptr);
		}
		else if((op=='B')||(op=='b'))
		{
			return;
		}
		else
			printf("Choose the correct option.\n");
	}while(1);


}
