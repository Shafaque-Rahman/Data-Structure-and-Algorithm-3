/* Program to search an element in a sorted rotated array.*/
#include<stdio.h>
#include<conio.h>
void sort(int[],int);
void main()
{
     int a[20],q,n,i,key,d,j=0,temp;
     clrscr();
     printf("Enter size of array\n");
     scanf("%d",&n);
     printf("Enter array elements\n");
     for(i=0;i<n;i++)
     {
	  scanf("%d",&a[i]);
     }
     sort(a,n);
     printf("Array after sorting:\n");
     for(i=0;i<n;i++)
     {
	  printf("%d ",a[i]);
     }
     printf("\nEnter d element from which you want to rotate array\n");
     scanf("%d",&d);
     while(j<d)
     {
	  temp=a[0];
	  for(i=0;i<n-1;i++)
	  {
	       a[i]=a[i+1];
	  }
	  a[i]=temp;
	  j++;
     }
     printf("Array after rotation is:-\n");
     for(i=0;i<n;i++)
     {
	  printf("%d ",a[i]);
     }
     printf("\nEnter key value to search from array\n");
     scanf("%d",&key);
     for(i=0;i<n;i++)
     {
	  if(a[i]==key)
	  {
	     q=i;
	     break;
	  }
     }
   printf("%d is present at %d position of sorted rotated array\n",key,q+1);
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