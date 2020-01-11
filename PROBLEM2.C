/* Program to find the sum of bit difference in all pairs
   that can be formed from an array of n elements. */
#include<stdio.h>
#include<conio.h>
static int s=0;
int bin(int);
int difference(int,int);
void main()
{
     int a[20],n,i,j,m1,m2,sum=0;
     clrscr();
     printf("Enter size of array\n");
     scanf("%d",&n);
     printf("Enter array elements\n");
     for(i=0;i<n;i++)
     {
	  scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
	 for(j=0;j<n;j++)
	 {
	     s=0;
	     m1=bin(a[i]);
	     m2=bin(a[j]);
	     sum+=difference(m1,m2);


	 }
     }
     printf("\n%d is sum of all pair difference\n",sum);
     getch();
}
int difference(int k,int l)
{
     int dif=0,x,y;
     while(k>0 || l>0)
     {
	  x=k%10;
	  y=l%10;
	  if(y-x==1 || x-y==1)
	  {
	       dif++;
	  }
	  k=k/10;
	  l=l/10;
     }
     return dif;
}
int bin(int a)
{
      int b[10],i=0,x=0,j;
      while(a>0)
      {
	  b[i]=a%2;
	  a=a/2;
	  i++;
      }
      for(j=i-1;j>=0;j--)
      {
	  x=x*10+b[j];
      }
      return x;

}