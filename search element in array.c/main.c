#include <stdio.h>
int arr[20];
main()
{
    void read_array(int n);
    void display_array(int n);
    void average_array(int n,int x);
    int n,x;
    printf("Enter n\n");
    scanf("%d",&n);
    if(n>=1&&n<=20)
    {
        read_array(n);
        display_array(n);
        printf("Enter numbers\n");
        scanf("%d",&x);
        average_array(n,x);
    }
    else
    {
        printf(" numbers not found\n");
    }
    }
void read_array(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void display_array(int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
void average_array(int n,int x)
{
    int i,j,f=0,c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            f=1;
            c++;
        }
    }
    if(f==1)
        printf("Number found in array\n");
    else
        printf("Number not found in array\n");
}


