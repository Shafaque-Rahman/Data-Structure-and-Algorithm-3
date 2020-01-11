//Program to traverse a matrix of integers in spiral form.
#include<stdio.h>
#include<conio.h>
void main()
{
     int i,j,m,n,a[20][20],k;
     clrscr();
     printf("Enter row and column size\n");
     scanf("%d%d",&m,&n);
   //  x=m;y=n;
     printf("Enter %d elements\n",m*n);
     for(i=0;i<m;i++)
     {
	  for(j=0;j<n;j++)
	  {
		scanf("%d",&a[i][j]);
	  }
     }
     printf("\n Array is:\n");
     for(i=0;i<m;i++)
     {
	  for(j=0;j<n;j++)
	  {
		printf("%d  ",a[i][j]);
	  }
	  printf("\n");
     }
     printf("\nArray traversal in spiral form:\n");
     i=j=0;
     while(i<m && j<n)
     {
	for(k=j;k<n;k++)
	{
	    printf("%d ",a[i][k]);
	}
	i++;
	for(k=i;k<m;k++)
	{
	    printf("%d ",a[k][n-1]);
	}
	n--;
	if(i<m)
	{
	     for(k=n-1;k>=j;k--)
	     {
		  printf("%d ",a[m-1][k]);
	     }
	     m--;
	}
	if(j<n)
	{
	      for(k=m-1;k>=i;k--)
	      {
		   printf("%d ",a[k][j]);
	      }
	      j++;

	}
     }
     getch();
}