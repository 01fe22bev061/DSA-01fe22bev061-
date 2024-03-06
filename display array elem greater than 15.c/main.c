#include<stdio.h>
int x[50],i;
main()
{
   int n;
   void read_array(int n);
   void display_array(int n);
  void greater_than15(int n);
   printf("enter how many elements\n");
   scanf("%d",&n);
   if(n>=1 && n<=50)
   {
       read_array(n);
       display_array(n);
       greater_than15(n);
   }
   else
   {
       printf("max you can enter 5 elements\n");
   }

 }

 void read_array(int n)
 {

     for(i=0;i<n;i++)
      {
      printf("enter a value\n");
      scanf("%d",&x[i]);
      }
 }

void display_array(int n)
{

     printf("the elements in the array are\n");
    for(i=0;i<n;i++)
     {
      printf("%d ",x[i]);
     }
}

void greater_than15(int n)
{
      printf("\nthe greater than 15 elements are\n");
      for(i=0;i<n;i++)
      {
         if(x[i]>15)
         {
            printf("%d ",x[i]);
         }
      }
}

