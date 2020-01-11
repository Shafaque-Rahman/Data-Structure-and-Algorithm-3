//  Program of lock and key problem.
#include<stdio.h>
#include<conio.h>
//void swap(int,int);
void main()
{
      int i,j,n;
      char lock[20],key[20],temp;
      clrscr();
      printf("Enter no of lock and key data\n");
      scanf("%d",&n);
      printf("Enter %d lock value\n",n);
      fflush(stdin);
      for(i=0;i<n;i++)
      {
	   scanf("%c",&lock[i]);
	  fflush(stdin);
      }
      printf("Enter %d key value\n",n);
      for(i=0;i<n;i++)
      {
	   scanf("%c",&key[i]);
	   fflush(stdin);
      }
      for(i=0;i<n;i++)
      {
	   for(j=i;j<n;j++)
	   {
	       if(lock[i]==key[j])
	       {
		     //swap(key[i],key[j]);
		       temp=key[i];
		       key[i]=key[j];
		       key[j]=temp;
		     break;
	       }
	   }
      }
      printf("\nKey of Given lock is below:-\n");
      for(i=0;i<n;i++)
      {
	   printf("%c=%c\n",lock[i],key[i]);
      }
      getch();
}
/*void swap(int a,int b)
{
     int temp;
     temp=key[i];
     key[i]=key[j];
     key[j]=temp;
}                   */