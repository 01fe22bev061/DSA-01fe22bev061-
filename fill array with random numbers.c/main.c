#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void fill_random(int array[],int length,int max);

int main(void)
{
    int a[100],i;
    srand(time(NULL));
    fill_random(a,100,200);
    for(i=0;i<100;i++)
    {
        printf("array[%d]=%d\n",i,a[i]);
    }
    return 0;
}

void fill_random(int array[] , int length , int max)
{
    int i;
    for(i=0;i<length;i++)
    {
        array[i]=(rand()%max+1);
    }
}
