#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
	int roll;
	char name[20];
	float mark;
	struct student *prv;
	struct student *next;
}STD;

void addStd(STD **);
void print(STD *);
void Delete(STD **);
void sorting(STD **);
void modify(STD *);
void save_e(STD *);
void save_exit(STD *);
