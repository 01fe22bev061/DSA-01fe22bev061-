#include<stdio.h>
int x[40],i;
main()
{
   int n;
   void read_array(int n);
   void display_array(int n);
   void sum_array(int n);
   printf("enter how many elements\n");
   scanf("%d",&n);
   if(n>=1 && n<=40)
   {
       read_array(n);
       display_array(n);
       sum_array(n);
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
void sum_array(int n)
{
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+x[i];
    }
    printf("sum of array elements=%d\n",sum);
}
