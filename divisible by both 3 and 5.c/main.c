#include <stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a%3==0&&a%5==0)
    {
        printf("%d is divisible by both 3 and 5\n",a);
    }
    else
    {
        printf("%d is not divisible by both 3 and 5\n",a);
    }

}
