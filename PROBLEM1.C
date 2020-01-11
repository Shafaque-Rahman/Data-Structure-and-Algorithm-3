/* Program to find the next greater number formed after
   permuting the digits of given number.*/
void enqueue(int);
int dequeue();
int size=50;
int queue[50],front=-1,rear=-1;
#include<stdio.h>
#include<conio.h>
void main()
{
      int r1,r2,min,temp,t=1,min2;
      long int m,n;
      clrscr();
      printf("Enter any digit number\n");
      scanf("%ld",&n);
      m=n;
      min=n%10;
      while(n>0)
      {
	   r1=n%10;
	   n=n/10;
	   r2=n%10;
	   if(r1<r2)
	   {
		 enqueue(r2);
		 continue;
	   }
	   else
	   {
	       n=n/10;
	       if(min>r2)
	       {
		   n=n*10+min;
	       }
	       else
	       {    min2=dequeue();
		    while(min2<r2)
		    {
			 enqueue(min2);
			 min2=dequeue();
		    }
		    n=n*10+min2;
		    n=n*10+min;

	       }
	       while(front!=rear)
	       {
		     temp=dequeue();
		     if(t==1 && r2<temp)
		     {
		     n=n*10+r2;
		     n=n*10+temp;
		     t=0;
		     }
		     else
		     n=n*10+temp;
	       }
	       if(t==1)
		    n=n*10+r2;
	       break;
	   }
      }
	   printf("%ld is next greater number of %ld",n,m);
	   getch();

}

void enqueue(int a)
{
    if(rear==size-1)
    {
	 printf("Queue is full\n");
	 return;
    }
    if(rear==-1)
    {
       front=rear=0;
    }
    queue[rear]=a;
    rear++;
}
int dequeue()
{
     int i;
     if(front==-1)
     {
	  printf("Queue is empty\n");
	  return 0;
     }
     i=queue[front];
     front++;
     return i;

}