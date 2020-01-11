/* Program to find the minimum number of platform required for the railway
   station so that no trains waits according to arrival and departure time.*/
#include<stdio.h>
#include<conio.h>
void sort(int[],int);
void main()
{
     int arr[20],dep[20],max=0,q=0;
     int i,j,n,m;
     clrscr();
     printf("Enter no of arrival time\n");
     scanf("%d",&m);
     printf("Enter no of departure time\n");
     scanf("%d",&n);
     printf("Enter arrival time in hhmm format\n");
     for(i=0;i<m;i++)
     {
	  scanf("%d",&arr[i]);
     }
     printf("Enter departure time in hhmm format\n");
     for(i=0;i<n;i++)
     {
	  scanf("%d",&dep[i]);
     }
     sort(arr,m);
     sort(dep,n);
     for(i=0;i<m;i++)
     {
	  printf("%d ",arr[i]);
     }
     printf("\n");
     for(i=0;i<n;i++)
     {
	  printf("%d ",dep[i]);
     }
     getch();
     i=j=0;
     while(i<m || j<n)
     {
	  if(arr[i]<dep[j])
	  {
	       q++;i++;
	       if(q>max)
	       {
		    max=q;

	       }
	  }
	 else if(arr[i]>dep[j])
	  {
	      q--;j++;
	       if(q>max)
	       {
		    max=q;

	       }
	  }
	 else if(i==m && j<n)
	  {
	      q--; j++;
	       if(q>max)
	       {
		    max=q;

	       }
	  }
	 else if(i<m && j==n)
	  {
	      q++;  i++;
	       if(q>max)
	       {
		    max=q;

	       }
	  }
     }
     printf("\n%d platform required at a time\n",max);
     getch();
}

void sort(int a[],int n)
{
   int i,j,temp;
   for(i=1;i<n;i++)
   {
       temp=a[i];
       for(j=i-1;j>=0 && temp<a[j];j--)
       {
	  a[j+1]=a[j];
       }
       a[j+1]=temp;
   }
}