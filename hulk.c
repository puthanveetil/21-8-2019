#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i;
for(i=1;i<=n;i++)
{
if (i==1)
printf("I hate");
else if(i%2!=0 && i>=3)
printf(" that I hate");
else 
printf(" that I love");
}
printf(" it");
}