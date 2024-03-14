#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void write(FILE*fp,int a[]);
void read(FILE*fp,int a[]);
void fill_random(int array[],int length,int max);
int main(void)
{
    int a[100];
    FILE *fp;
    fill_random(a,10,50);
    write(fp,a);
    read(fp,a);


}
void write(FILE*fp,int a[])
{
    int i;
    fp=fopen("random_numbers.txt","w");
    for(i=0;i<9;i++)
    {
        fprintf(fp," %d\n",a[i]);

    }
fclose(fp);
}
void fill_random(int array[] , int length , int max)
{
    int i;
    for(i=0;i<length;i++)
    {
        array[i]=(rand()%max+1);
    }
}

void read(FILE*fp,int a[])
{
    int i;
    fp=fopen("random_numbers.txt","r");
    i=0;
    printf("the elements of the file are\n");
    while(!feof(fp))
    {
        fscanf(fp,"%d",&a[i]);
        i++;
 printf("%d\n",a[i]);
    }
    fclose(fp);
}


