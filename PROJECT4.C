#include<stdio.h>
#include<conio.h>
struct student
{
char name[20];
int rollno;
int mark;
char city[20];
char dream[20];
};
void read(struct student s[],int n)
{
int i;
for(i=0;i<3;i++)
{
printf("enter the name:\n");
scanf("%s",s[i].name);
printf("enter the rollno:\n");
scanf("%d",&s[i].rollno);
printf("enter the mark:\n");
scanf("%d",&s[i].mark);
printf("enter the city:\n");
scanf("%s",s[i].city);
printf("enter the dream:\n");
scanf("%s",s[i].dream);
}
}
void display(struct student s[],int n)
{
int i;
printf("\n------students details-------");
for (i=0;i<n;i++)
{
printf("student name:%s\n",s[i].name);
printf("student rollno:%d\n",s[i].rollno);
printf("student mark:%d\n",s[i].mark);
printf("student city:%s\n",s[i].city);
printf("student dream:%s\n",s[i].dream);
}
}
int main()
{
struct student s[10];
clrscr();
read(s,10);
display(s,10);
return 0;
}