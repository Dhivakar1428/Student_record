#include"header.h"

void link(STD *ptr)
{
    ST *head = NULL, *new, *last = NULL;

    if((ptr) == NULL)
    {
        printf("link : No data available.\n");
        return;
    }

    while((ptr) != NULL)
    {
        new = (ST *)malloc(sizeof(ST));

        new->roll = (ptr)->roll;
        strcpy(new->name, (ptr)->name);
        new->mark = (ptr)->mark;

        new->prv = last;
        new->next = NULL;

        if(head == NULL)
            head = new;
        else
        {
            last->next = new;
        }

        last = new;
        (ptr) = (ptr)->next;
    }
    sorting(&head);
}
int count(ST *ptr)
{
	int n=0;
	while(ptr!=NULL)
	{
		n++;
		ptr = ptr->next;
	}
	return n;
}

void sort_name(ST **ptr)
{
    ST *i, *j;
    int roll;
    float mark;
    char name[20];

    for(i = *ptr; i != NULL && i->next != NULL; i = i->next)
    {
        for(j = i->next; j != NULL; j = j->next)
        {
            if(strcmp(i->name, j->name) > 0)
            {
                roll = i->roll;
                i->roll = j->roll;
                j->roll = roll;

                strcpy(name, i->name);
                strcpy(i->name, j->name);
                strcpy(j->name, name);

                mark = i->mark;
                i->mark = j->mark;
                j->mark = mark;
            }
        }
    }

    printf("\nStudent list sorted successfully\n");
    print2(*ptr);
}

void sort_percentage(ST **ptr)
{
    ST *i, *j;
    int roll;
    float mark;
    char name[20];

    for(i = *ptr; i != NULL && i->next != NULL; i = i->next)
    {
        for(j = i->next; j != NULL; j = j->next)
        {
            if(i->mark < j->mark)
            {
                roll = i->roll;
                i->roll = j->roll;
                j->roll = roll;

                strcpy(name, i->name);
                strcpy(i->name, j->name);
                strcpy(j->name, name);

                mark = i->mark;
                i->mark = j->mark;
                j->mark = mark;
            }
        }
    }

    printf("\nStudent info sorted successfully\n");
    print2(*ptr);
}

void sorting(ST **ptr)
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
