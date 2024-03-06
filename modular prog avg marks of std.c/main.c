#include <stdio.h>
#include <stdlib.h>

int main()
{
    float avg;
    int n;
    float class_avg(int n);
    printf("enter no of students\n");
    scanf("%d",&n);
    avg=class_avg(n);
    printf("average marks=%f\n",avg);
}
float class_avg(int n)
{
    int i, sum=0,m;
    float average;
    for(i=1;i<=n;i++)
    {
        printf("enter marks\n");
        scanf("%d",&m);
        sum=sum+m;
    }
    average=(float)sum/n;
    return(average);
}
