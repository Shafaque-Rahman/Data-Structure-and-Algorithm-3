/* Given a positive number X,print all jumping numbers (all adjacent
   differ by 1) smaller than or equal to X. */
#include<stdio.h>
#include<conio.h>
int jump(int);
void main()
{
     int x,p,q;
     clrscr();
     printf("Enter any number to find jumping number\n");
     scanf("%d",&x);
     p=0;
     while(p<x)
     {
	  q=jump(p);
	  if(q==1)
	  {
	      printf("%d ",p);
	  }
	  p++;
     }
     getch();
}
int jump(int p)
{
    int m,r,n=1;
    if(p<=10)
    {
	 return 1;
    }
    else if(p>10)
    {
	 while(p>=10)
	 {
		m=p%10;
		p=p/10;
		r=p%10;
		if(m-r==1 || r-m==1);

		else
		{
			n=0;
		}
	  }
     }
     return n;
}
