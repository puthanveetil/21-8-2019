#include<stdio.h>
int main()
{
int n,i,j,k,a[100],x,y,p,l;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
x=0;
y=a[0];
for(i=0;i<n;i++)
{
if(x<a[i]) 
{
x=a[i]; 
j=i;
}
if(y>=a[i]) 
{
y=a[i];
k=i;
}}
l=i-k-1;
if(j>k)
p=j+l-1;
if(j<k) 
p=j+l;
printf("%d",p);
}