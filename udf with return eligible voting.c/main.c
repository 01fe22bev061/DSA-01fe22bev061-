#include <stdio.h>
int main()
{
    int age,v;
    void vote(int);
    printf ("enter the age");
    scanf("%d",&age);
    v=vote(age,v);
    printf("vote=%d\n",v);
}
void vote(int a)
{
    if(age>18)
    {
        return(age);
    }
}
