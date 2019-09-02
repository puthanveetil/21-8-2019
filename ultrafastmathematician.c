#include<stdio.h>
#include<string.h>
int main()
{
int i;
char p[1000],q[1000];
scanf("%s%s",p,q);
for(i=0;i<strlen(p);i++)
{
if(p[i]==q[i])
printf("0");
else
printf("1");	
}
}