#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    void biggest(float a,float b);
    printf("enter 2 numbers\n");
    scanf("%f%f",&a,&b);
    biggest(a,b);
}
void biggest(float p,float q)
{
    if(p>q)
    {
        printf("%f is greater\n",p);
    }
    else
    {
        printf("%f is greater\n",q);
    }
}

