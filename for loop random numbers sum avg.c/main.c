#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a,sum=0;
    float avg;
    printf("enter how many numbers\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter a number\n");
        scanf("%d",&a);
        sum=sum+a;
    }
    avg=(float)sum/n;
    printf("sum of random number=%d\n",sum);
    printf("avg of random number=%f\n",avg);
}

