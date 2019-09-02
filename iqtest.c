#include<stdio.h>
int main()
{
int n,i,p,q,k,l;
scanf("%d",&n);
int a[n];
p=0;
q=0;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
p++;
k=i;
}
else
{
q++;
l=i;
}
}
if(p==1)
printf("%d",k+1);
else
printf("%d",l+1);
return 0;
}