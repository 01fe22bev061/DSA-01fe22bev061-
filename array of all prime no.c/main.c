#include <stdio.h>
int a[50];
main()
{
    void read_array(int n);
    void display_array(int n);
    void prime_array(int n);
    int n;
    printf("enter no of elements in array\n");
    scanf("%d",&n);
    if(n>=1&&n<=50)
    {
        read_array(n);
        display_array(n);
        prime_array(n);
    }
    else
    {
        printf("size of array is incorrect\n");
    }
}
void read_array(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display_array(int n)
{
    int i;
    printf("the array elements\n");
    for(i=0;i<=n;i++)
    {
        printf("%d",a[i]);
    }
}

void prime_array(int n)
{
    int i,j,prime;
    printf("the prime elements are\n");
    for(i=0;i<n;i++)
    {
        prime=1;
        for(j=2;j<=a[i]/2;j++)
        {
            if (a[i]%j==0)
            {
                prime=0;
                break;
            }
        }
        if(prime==1)
        printf("\n%d",a[i]);
    }
}

