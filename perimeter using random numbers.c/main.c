#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void fill_random(int array[],int length,int max);
void Perimeter(int a[]);
int main(void)
{
    int a[100],i;
    srand(time(NULL));
    fill_random(a,10,20);
    printf("the given radius are \n");
    for(i=0;i<10;i++)
    {
        printf("array[%d]=%d\n",i+1,a[i]);
    }

    Perimeter(a);



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

void Perimeter(int a[])
{
    int i,r;
    float peri;
    for(i=0;i<10;i++)
    {
        r=a[i];
        peri=2*3.142*r;
        printf("the Perimeter%d=%f\n",i+1,peri);
    }
}
