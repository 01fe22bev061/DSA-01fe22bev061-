#include <stdio.h>
int main()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  if(a%5==0)
{
    printf("%d is divisible by 5\n",a);
}
else
{
    printf("%d is not divisible by 5\n",a);
}
}
