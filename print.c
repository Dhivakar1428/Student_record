#include"header.h"

void print(STD *ptr)
{
	if(ptr==NULL)
	{
		printf("\nThere is no student record to show\n");
		return;
	}

	printf("\nShowing Student info\n");
	printf("============================================\n");
	printf(" %-10s %-20s %-10s\n","Roll No","Name","Percentage");
	printf("============================================\n");
	while(ptr!=NULL)
	{
		printf(" %-10d %-20s %-10.2f\n",ptr->roll,ptr->name,ptr->mark);
		ptr = ptr->next;
	}
	printf("============================================\n");
}
