#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n1,n2,s;
        int sum_nat(int n1,int n2);
        printf("enter n1 & n2\n");
        scanf("%d%d",&n1,&n2);
        s=sum_nat(n1,n2);
        printf("sum=%d\n",s);
}
   int sum_nat(int n1,int n2)
    {
        int sum=0;
        int i;
        for(i=n1;i<=n2;i++)
        {
            sum=sum+i;
        }
        return(sum);
    }
