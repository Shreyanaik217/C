#include<stdio.h>
#include<stdlib.h>
void insert(int*,int);
void delete(int*,int);
void display(int*,int);
int rear=-1,front=0,count=0;
int main()
{
	int n,ch,q[20];
	printf("entre the size of the queue\n");
	scanf("%d",&n);
	while(1)
	{
		printf("\n******menu*******\n");
        printf("1.insert\n");
        printf("2.delete\n");
        printf("3.display\n");
        printf("4.exit\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
        	case 1:insert(q,n);
        	      break;
            case 2:delete(q,n);
        	      break;
            case 3:display(q,n);
        	      break;
            case 4:exit(0);
        	      break;
            default:printf("\n invalid choice\n");
        	      
		}	
	}
	return;
}


void insert(int q[],int n)
{
	if(count==n)
	{
		printf("queue is full\n");
		return;
	}
	rear=(rear+1)%n;
	printf("enter the element:");
	scanf("%d",&q[rear]);
	count++;
}

void delete(int q[],int n)
{
	if(count==0)
	{
		printf("queue is empty\n");
		return;
	}
	printf(" the deleted element is:%d",q[front]);
	front=(front+1)%n;
	count--;
}


void display(int q[],int n)
{
	int i,f;
	if(count==0)
	{
		printf("queue is empty\n");
		return;
	}
	printf(" the element in queue are:\n");
	f=front;
	for(i=1;i<=count;i++)
	{
		printf("%d\t",q[f]);
		f=(f+1)%n;
	}
	printf("\n");
}
	




