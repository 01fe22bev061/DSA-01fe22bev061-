#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,sum,sub,mul,div;
    char ch;
    printf("enter 2 numbers\n");
    scanf("%d%d",&n1,&n2);
    printf("enter the choice\n");
    scanf("%c%c",&ch,&ch);
    switch(ch)
    {
        case'+':sum=n1+n2;
               printf("sum=%d\n",sum);
               break;
        case'-':sub=n1-n2;
               printf("sub=%d\n",sub);
               break;
        case'*':mul=n1*n2;
               printf("mul=%d\n",mul);
               break;
        case'/':div=n1/n2;
               printf("div=%d\n",div);
               break;
        default:printf("invalid choice\n");
    }
}


