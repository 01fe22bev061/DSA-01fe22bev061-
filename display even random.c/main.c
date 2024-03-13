#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void fill_random(int array[],int length,int max);

int main(void)
{
    int a[100],i;
    srand(time(NULL));
    fill_random(a,10,20);
    for(i=0;i<10;i++)
    {
        printf("array[%d]=%d\n",i+1,a[i]);
    }
    printf("the even numbers are\n");
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            printf("array[%d]=%d\n",i+1,a[i]);
        }
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

