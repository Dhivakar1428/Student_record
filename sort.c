#include"header.h"

int count(STD *ptr)
{
	int n=0;
	while(ptr!=NULL)
	{
		n++;
		ptr = ptr->next;
	}
	return n;
}

void sort_name(STD **ptr)
{
	int No_of_std = count((*ptr)); 
	STD temp,*i,*j;
	
	for(i=(*ptr);i->next!=NULL;i=i->next)
	{
		for(j=i->next;j!=NULL;j=j->next)
		{
			if(strcmp(i->name,j->name)>0)
			{
				STD *i_next = i->next;
				STD *i_prv = i->prv;
				STD *j_next = j->next;
				STD *j_prv = j->prv;

				temp = *i;
				*i = *j;
				*j = temp;

				i->next = i_next;
				i->prv = i_prv;
				j->next = j_next;
				j->prv = j_prv;
			}
			
		}
	}
	printf("\nStudent list sorted successfully\n");
}

void sort_percentage(STD **ptr)
{
	int No_of_std = count((*ptr));
	STD temp,*i,*j;
	for(i=(*ptr);i->next!=NULL;i=i->next)
	{
		for(j=i->next;j!=NULL;j=j->next)
		{
			if(i->mark<j->mark)
			{
				STD *i_next = i->next;
                                STD *i_prv = i->prv;
                                STD *j_next = j->next;
                                STD *j_prv = j->prv;

                                temp = *i;
                                *i = *j;
                                *j = temp;

                                i->next = i_next;
                                i->prv = i_prv;
                                j->next = j_next;
                                j->prv = j_prv;		
			}
		}
	}
	printf("\nStudent info sorted successfully\n");
}

void sorting(STD **ptr)
{
	char op=0;
	do
	{
		printf("\n[N/n] Sort by name\n");
		printf("[P/p] Sort by percentage\n");
		printf("[B/b] Back to main menu\n");

		printf("Enter the option : ");
		scanf(" %c",&op);

		if((op=='N')||(op=='n'))
		{
			sort_name(ptr);
		}
		else if((op=='P')||(op=='p'))
		{
			sort_percentage(ptr);
		}
		else if((op=='B')||(op=='b'))
		{
			printf("\n");
			return;
		}
		else 
			printf("Choose the correct option.\n");
		
	}while(1);
}
