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

typedef struct st
{
        int roll;
        char name[20];
        float mark;
        struct st *prv;
        struct st *next;
}ST;

void addStd(STD **);
void print(STD *);
void Delete(STD **);
void sorting(ST **);
void modify(STD *);
void save_e(STD *);
void save_exit(STD *);
void link(STD *);
void print2(ST *);
