#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    void add (int n1,int n2);
    printf("enter 2 numbers\n");
    scanf("%d%d",&n1,&n2);
    add(n1,n2);
}
void add(int n1,int n2)
{
    int sum;
    sum=n1+n2;
    printf("sum =%d\n",sum);
}
