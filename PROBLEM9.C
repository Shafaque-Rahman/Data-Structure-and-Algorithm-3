// Given an array consisting 0's,1's and 2's, write a program to sort it.
#include<stdio.h>
#include<conio.h>
void sort(int a[],int n)
{
   int i,j,temp;
   for(i=1;i<n;i++)
   {
       temp=a[i];
       for(j=i-1;j>=0 && temp<a[j];j--)
       {
	  if(a[j]>2 || a[j]<0)
	  {
		printf("Array element is other than 0,1 and 2\n");
		getch();
		exit();
	  }
	  a[j+1]=a[j];
       }
       a[j+1]=temp;
   }
}
void main()
{
      int i,n,a[20];
      clrscr();
      printf("Enter size of array\n");
      scanf("%d",&n);
      printf("Enter array elements\n");
      for(i=0;i<n;i++)
      {
	   scanf("%d",&a[i]);
      }
      sort(a,n);
      printf("After sorting:\n");
      for(i=0;i<n;i++)
      {
	   printf("%d  ",a[i]);
      }
      getch();
}
