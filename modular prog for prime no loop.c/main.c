#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    void prime(int num);
    printf("enter a num\n");
    scanf("%d",&num);
    prime(num);
}
void prime(int num)
{
    int i,p=0;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            p=1;
            break;
        }
    }
    if(p==0)
        printf(" its prime\n");
    else
        printf("its not prime\n");
}
