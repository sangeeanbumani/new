#include<stdio.h>
#include<conio.h>
#include<string.h>
void description(void);
void prefix(char x1[],char x2[]);
void main()
{
char x1[MAX];
char x2[MAX];
description();
for(int i=0;i<5;i++)
{
printf("\n\n\n enter first word");
fgets(x1,MAX,stdin);
x2[strlen(x2)-1]='\0';
printf("%s,%s",x1,x2);
prefix(x1,x2);
}
return(0);
void description(void)
{
puts("longest common prefix");
}
void prefix(char x1[],char x2[])
{
char x3[MAX];
for(int i=0;i<MAX;i++)
{
while(x1[i]==x2[i])
x3[i]=x1;
}
printf("%s",x3);
}
getch();
}
