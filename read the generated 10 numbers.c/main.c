#include <stdio.h>
int main()
{
    int numbers[10];
    printf("Enter 10 numbers \n");
    for (int i = 0; i < 10; ++i)
    {
        printf("number %d- ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("the generated numbers are \n");
    for (int i = 0; i < 10; ++i)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}
