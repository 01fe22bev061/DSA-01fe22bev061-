#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=0;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum of natural numbers=%d",sum);
}
