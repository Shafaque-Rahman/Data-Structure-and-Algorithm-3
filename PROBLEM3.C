// Program to trapping rainwater problem.

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,j,ind1,a[20],m,s=0;
    clrscr();
    printf("Enter size of data of mapping\n");
    scanf("%d",&n);
    printf("Enter %d data value\n",n);
    for(i=0;i<n;i++)
    {
	 scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
	 m=a[i];
	 if(m==0)
	 continue;
	 break;
    }
    ind1=i;
    while(ind1<n-1)
    {
	for(i=ind1+1;i<n;i++)
	{
	   if(a[i]<m)
	   {
	      if(i!=n-1)
	      {
		   continue;
	      }
	      else
	      {
		   ind1++;
		   m=a[ind1];
		   break;
	      }
	   }
	   else
	   {
	       for(j=i-1;j>ind1;j--)
	       {
		    s+=m-a[j];

	       }
	       ind1=i;
	       m=a[i];
	       break;
	   }
	}
    }
    printf("\n%d unit water is trapped from above data\n",s);
    getch();
}