#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#define MAXCHAR 1000
int absent[100],present[100],Qblock_1bed[5],Qblock_2bed[5],num=12;
float grp_topper=0;

struct hash *cse_branch=NULL;
struct hash *it_branch=NULL;
struct hash *mech_branch=NULL;

struct node              
{
    int rollno;
    float cgpa;
    float ncgpa;
    int rank;
    char name[100];
    struct node *next;
}*current,*temp,*last=NULL,*p;

struct hash
{
    int count;
    float highest;
    struct node *head;
};

struct node *createnode(int rollno, char *name, float cgpa)
{
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    newnode->rollno=rollno;
    newnode->cgpa=cgpa;
    newnode->ncgpa=0;
    newnode->rank=0;
    strcpy(newnode->name,name);
    newnode->next=NULL;
    return newnode;
};

