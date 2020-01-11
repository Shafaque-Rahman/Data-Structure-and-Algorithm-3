/* Find the maximum value of a[j]-a[i]+a[l]-a[k], for every four
   indices i,j,k,l such that i<j<k<l. */
#include<stdio.h>
#include<conio.h>
void main()
{
     int a[20],n,i,j,k,l,sum,max=0;
     clrscr();
     printf("Enter size of array\n");
     scanf("%d",&n);
     printf("Enter array elements\n");
     for(i=0;i<n;i++)
     {
	  scanf("%d",&a[i]);
     }
     for(i=0;i<n-3;i++)
     {
	  for(j=i;j<n-2;j++)
	  {
	       for(k=j;k<n-1;k++)
	       {
		    sum=0;
		    for(l=k;l<n;l++)
		    {
			  sum=a[j]-a[i]+a[l]-a[k];
			  if(max<sum)
			  {
			       max=sum;
			  }
		    }
	       }
	  }
     }
     printf("\nMaximum value of given array is %d",max);
     getch();
}