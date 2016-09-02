#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,index;
char ch,a[26]=0;
while((ch=(getchar))!='\n')
{
if('A'<=ch&&ch>='Z')
index=ch-'A';
elseif('a'<=ch&&ch>='z')
index=ch-'a';
else
continue;
x[index]=1;
}
j=1;
for(i=0;i<26;++i)
{
if(x[i]==0)
j=0;
}
if(j==1)
printf("It is a pangram");
else
printf("It is not a pangram");
getch();
}

