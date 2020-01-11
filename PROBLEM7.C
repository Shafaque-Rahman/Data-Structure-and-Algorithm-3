/* Program to rearrange an array so that a[i] becomes
   a[a[i]] with O(1) extra space. */
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,t,q,m,a[20],j,temp,p,i=0;
    clrscr();
    printf("Enter size of array\n");
    scanf("%d",&n);
    t=n;
    printf("Enter %d element\n",n);
    for(j=0;j<n;j++)
    {
	 scanf("%d",&a[j]);
    }
    for(i=n-1;i>=0;i--)
    {
	 if(a[i]==i){
	 n--;
	 continue;}
	 else
	 break;
    }
    i=0;
    m=0; p=a[0];
    while(m<n-1)
    {
	  temp=a[i];
	  a[i]=a[p];
	  q=a[p];
	  a[p]=temp;
	  i=p;
	  p=q;
	  m++;
    }
    printf("\nArray after rearrangement\n");
    for(i=0;i<t;i++)
    {
	 printf("%d ",a[i]);
    }
    getch();
}