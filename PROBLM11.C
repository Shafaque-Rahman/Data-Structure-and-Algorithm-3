/* Given an array and an integer 'k',find the maximum, for each
   and every contiguous subarray of size 'k'.*/
#include<stdio.h>
#include<conio.h>
void main()
{
     int a[20],n,i,k,j,sum,max=0;
     clrscr();
     printf("Enter size of array\n");
     scanf("%d",&n);
     printf("Enter size for sub array\n");
     scanf("%d",&k);
     printf("Enter array elements\n");
     for(i=0;i<n;i++)
     {
	  scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
	 sum=0;
	 for(j=i;j<i+k&&j<n;j++)
	 {
	       sum+=a[j];
	 }
	 if(max<sum)
	 {
	      max=sum;
	 }
      }
      printf("Maximum sum of sub array of size %d is %d ",k,max);
      getch();
}
