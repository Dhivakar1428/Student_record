#include"header.h"

void save_e(STD *ptr)
{
	if(ptr==NULL)
	{
		printf("\nNo student records to save\n");
		return;
	}
	FILE *fs = fopen("student_record","w");

	fprintf(fs," %-10s %-20s %-10s\n","Roll No","Name","Percentage");
	
	while(ptr!=NULL)
	{
		fprintf(fs," %-10d %-20s %-10.2f\n",ptr->roll,ptr->name,ptr->mark);
		ptr = ptr->next;
	}

	printf("\nStudent records are saved in file successfully..\n");

	fclose(fs);
}
void save_exit(STD *ptr)
{

                char op;
                printf("\n[S] Save and Exit.\n");
                printf("[W] Without Save and Exit.\n");
                printf("Enter the option : ");
                scanf(" %c",&op);

                if((op=='S')||(op=='s'))
                {
                        save_e(ptr);
			return;
                }
                else if((op=='W')||(op=='w'))
                {
                        printf("\n");
                        return;
                }


}
