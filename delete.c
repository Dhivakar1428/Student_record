#include"header.h"

void delete_name(STD **ptr)
{
	if((*ptr)==NULL)
	{
		printf("No students record to delete\n");
		return;
	}	
	char name[20];
	printf("Enter the name to search and delete : ");
	scanf("%s",name);

	STD *same_name = (*ptr);
	STD *temp2 = (*ptr);
	STD *temp = (*ptr);
	STD *temp3 = (*ptr);
	int same_name_count=0;

	while(same_name!=NULL)
	{
		if(strcmp(same_name->name,name)==0)
		{
			same_name_count++;
		}
		same_name = same_name->next;
	}
	if(same_name_count==0)
	{
		printf("No student record found with name %s\n",name);
		return;
	}
	if(same_name_count==1)
	{
		while(temp!=NULL)
		{
			if(strcmp(name,temp->name)==0)
			{
				if(temp==(*ptr))
				{
					(*ptr) = (*ptr)->next;
					if((*ptr)!=NULL)
						(*ptr)->prv = NULL;
				}
				else
				{
					temp->prv->next = temp->next;
					if(temp->next!=NULL)
						temp->next->prv = temp->prv;
				}
				free(temp);
				temp = NULL;
				printf("Deleted the Student info successfully..\n");
				return;
			}
			temp = temp->next;
		}
	}
	if(same_name_count>1)
	{
		printf("\nStudent info:\n");
		printf("=====================================\n");
		printf("%-10s %-15s %-10s\n","Roll No","Name","Percentage");
		printf("=====================================\n");
		
		while(temp2!=NULL)
		{
			if(strcmp(temp2->name,name)==0)
			{
				printf("%-10d %-15s %-10.2f\n",temp2->roll,temp2->name,temp2->mark);
			}
			temp2 = temp2->next;
		}
		printf("=====================================\n");
		int roll_no=0;
		printf("Enter the Roll No to find and delete : ");
		scanf("%d",&roll_no);
		
		while(temp3!=NULL)
		{
			if(temp3->roll==roll_no)
			{
				if(temp3==(*ptr))
				{
					(*ptr) = (*ptr)->next;
					if((*ptr)!=NULL)
						(*ptr)->prv = NULL;
				}
				else
				{
					temp3->prv->next = temp3->next;
					if(temp3->next!=NULL)
						temp3->next->prv = temp3->prv;

				}
				free(temp3);
				temp3 = NULL;
				printf("Deleted the student info successfully...\n");
				return;
			}
			temp3 = temp3->next;
		}


	}
}

void delete_roll(STD **ptr)
{
	if((*ptr)==NULL)
	{
		printf("No students records to delete\n");
		return;
	}
	int roll=0;
	printf("Enter the roll number : ");
	scanf("%d",&roll);

	STD *temp=(*ptr);
	while(temp!=NULL)
	{
		if(roll==temp->roll)
		{
			if(temp==(*ptr))
			{
				(*ptr)=(*ptr)->next;

				if((*ptr)!=NULL)
				  (*ptr)->prv=NULL;
			}
			else
			{
				temp->prv->next=temp->next;
				if(temp->next!=NULL)
					temp->next->prv=temp->prv;
			}

			free(temp);
			temp=NULL;
			printf("Deleted the Student info successfully..\n");
			return;
		}
		temp=temp->next;		
	}
	printf("No data found..\n");
}

void Delete(STD **ptr)
{
	if((*ptr)==NULL)
	{
		printf("No student records to delete\n");
		return;
	}
	
	do
	{
		char op=0;
		printf("\n[R/r] Delete by roll number\n");
		printf("[N/n] Delete by name\n");
		printf("[B/b] Back to the main menu\n");
		
		printf("Enter the option : ");
		scanf(" %c",&op);

		if((op=='R')||(op=='r'))
		{
			delete_roll(ptr);
		}
		else if((op=='N')||(op=='n'))
		{
			delete_name(ptr);
		}
		else if((op=='B')||(op=='b'))
		{
			return;
		}
		else
		{
			printf("Choose the correct option.\n");
		}

	}while(1);
}
