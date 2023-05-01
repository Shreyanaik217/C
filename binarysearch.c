#include<stdio.h>
int main()
{
	int a[10],n,flag,i,j,key;
	printf("enter  the n value\n");
	scanf("%d",&n);
	printf("enter the element in asending order\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("enter the element to be searched\n");
	scanf("%d",&key);
	flag=binary(a,0,n-1,key);
	if(flag==1)
	     printf("the element found\n");
	else
	     printf("element not found\n");
	return;
}
int binary(int a[],int low,int high,int key)
{
	int mid;
	mid=(high+low)/2;
	if(low>high)
	return 0;
	if(a[mid]==key)
	return mid;
	else if(key>a[mid])
	return binary(a,mid+1,high,key);
	else 
	return binary(a,low,mid-1,key);
}
