#include<stdio.h>
int main()
{
int gcd ,lcm,m,n,temp=0;
printf("entr the 2 values");
scanf("%d%d",&m,&n);
if(m<n)
{
	temp=m;
	m=n;
	n=temp;
}
gcd=GCD(m,n);
lcm=(m*n)/gcd;
printf("the gcd of m and n is=%d\n",gcd);
printf("the lcm  of m and n is=%d\n",lcm);
}
int GCD(int m, int n)
{
if(n==0)
return n;
else
GCD(m,m%n);
}
