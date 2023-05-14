#include<stdio.h>
int main()
{
	int n,i,flag=0,m=0;
	printf(" enter the number\n");
	scanf("%d",&n);
	m=n/2;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			printf("no is non prime");
			flag=1;
			break;
		}
	}
	if (flag==0)
	printf("no is prime");
	return 0;
	}
