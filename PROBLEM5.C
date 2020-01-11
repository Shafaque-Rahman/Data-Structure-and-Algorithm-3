 // Program to rotate a 2-dimensional array.
#include<stdio.h>
#include<conio.h>
void main()
{
     int i,j,x,y,m,n,p,a[20][20],temp;
     clrscr();
     printf("Enter row and column size\n");
     scanf("%d%d",&m,&n);
     x=m;y=n;
     printf("Enter %d elements\n",m*n);
     for(i=0;i<m;i++)
     {
	  for(j=0;j<n;j++)
	  {
		scanf("%d",&a[i][j]);
	  }
     }
     printf("2D array is:\n");
     for(i=0;i<m;i++)
     {
	  for(j=0;j<n;j++)
	  {
		printf("%d  ",a[i][j]);
	  }
	  printf("\n");
     }
     if(m==n )
     {
     i=j=0;
     while(i<m && j<n)
     {
	  p=0;
	  while(p<n-1-i)
	  {
		temp=a[i][j+p];
		a[i][j+p]=a[i+p][n-1];
		a[i+p][n-1]=a[m-1][n-1-p];
		a[m-1][n-1-p]=a[m-1-p][j];
		a[m-1-p][j]=temp;
		p++;
	  }
	  i++;j++;m--;n--;p=0;
     }
     printf("2D-Array after rotation is:\n");
     for(i=0;i<x;i++)
     {
	  for(j=0;j<y;j++)
	  {
		printf("%d  ",a[i][j]);
	  }
	  printf("\n");
     }
     }
     else
     {
	   printf("It is not square matrix,Rotation not possible\n");
     }
     getch();
}