#include"header.h"

void addStd(STD **ptr)
{
	STD *new = (STD *)malloc(1*sizeof(STD));
	if(new==NULL)
	{
		printf("Memory allocation failed.\n");
		return;
	}
	printf("\nEnter the student name\n");
	scanf(" %20[^\n]",new->name);
	printf("\nEnter the student Percentage\n");
	scanf("%f",&new->mark);


	if(((*ptr)==NULL))
	{
		new->roll = 1;
		new->prv = NULL;
		new->next = (*ptr);
		(*ptr) = new;
	}
	else
	{
		int max_roll = 1;
		STD *last = (*ptr);

		while((last->next!=NULL))
		{
			if(last->next->roll>max_roll)
				max_roll = last->next->roll;

			last = last->next;
		}
		new->roll = max_roll+1;
		new->next = last->next;
		new->prv = last;
		last->next = new;
	}
	printf("Student info added successfully...\n");
}
