#include"header.h"

int main()
{
	STD *hptr=NULL;
        FILE *fs = fopen("student_record","r");
        char str[100];
	char ch;
        if(fs == NULL)
        {
                printf("File not found\n");
                return 0;
        }
	
	fgets(str, sizeof(str), fs);

	while(1)
	{
		STD *new = (STD *)malloc(1*sizeof(STD));
		fscanf(fs,"%d",&new->roll);
		fscanf(fs,"%s",new->name);
		if(fscanf(fs,"%f",&new->mark)!=EOF)
		{
			if((hptr==NULL)||(hptr->roll>new->roll))
                        {
				new->prv = NULL;
                                if((hptr)!=NULL)
                                     (hptr)->prv = new;
                                new->next = (hptr);
                                (hptr) = new;
                        }
                       	else
                        {
				STD *last = hptr;

                                while((last->next!=NULL)&&(last->next->roll)<new->roll)
                                {
					last = last->next;
                                }
				new->next = last->next;
                                if(last->next!=NULL)
					last->next->prv = new;
                                new->prv = last;
                                last->next = new;
                        }
                }
		else
			break;	
     	}
	fclose(fs);
	char op=0;
	do
	{
		printf("\n****STUDENT RECORD MENU****\n");
		printf("[A/a] Add new student record\n");
		printf("[D/d] Delete student record\n");
		printf("[M/m] Modify student record\n");
		printf("[P/p] Show all students record\n");
		printf("[S/s] Sort Student record\n");
		printf("[V/v] Save records\n");
		printf("[E/e] Exit\n");
		printf("\nChoose the option : ");
		scanf(" %c",&op);

		if((op=='A')||(op=='a'))
		{
			addStd(&hptr);
		}
		else if((op=='P')||(op=='p'))
		{
			print(hptr);
		}
		else if((op=='M')||(op=='m'))
		{
			modify(hptr);
		}
		else if((op=='D')||(op=='d'))
		{			
			Delete(&hptr);
		}
		else if((op=='S')||(op=='s'))
		{
			sorting(&hptr);
		}
		else if((op=='V')||(op=='v'))
		{
			save_e(hptr);
		}
		else if((op=='E')||(op=='e'))
		{
			save_exit(hptr);
			return 0;
		}
		else
		{
			printf("Choose the correct option.\n");
		}
		
	}while(1);
}
