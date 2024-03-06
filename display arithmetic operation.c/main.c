#include <stdio.h>
int main()
{
    int n1,n2,ch,sum,sub,mul,div;
    printf("enter the two numbers and choice\n");
    scanf("%d%d%d",&n1,&n2,&ch);
    if(ch==1)
    {
    sum=n1+n2;
    printf("sum=%d\n",sum);
    }
    else if (ch==2)
    {
    sub=n1-n2;
    printf("sub=%d\n",sub);
    }
    else if(ch==3)
    {
    mul=n1*n2;
    printf("mul=%d\n",mul);
    }
    else if(ch==4)
    {
    div=n1/n2;
    printf("div=%d\n",div);
    }
    else
    {
    printf("invalid choice");
    }
}

