#include<stdio.h>
#include<conio.h>
void main()
{
int r,i,j,k;
scanf("%d",&r);
for(i=1;i<=r;i++)
{
for(j=1;j<=10;j++)
{
printf("%d*%d=%d",i,j,i*j);
}
printf("/n");
}
getch();
}
