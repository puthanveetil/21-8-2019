#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%477==0)
	{
		printf("YES");
	}
 	else
	printf("NO");
    
}