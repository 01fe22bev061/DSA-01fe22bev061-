#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>
#define size 200
char stack[size];
int top;char n[100];
char j;
int main()
{
    int push(char,int);
    void d();
    void p(char n[100],int);
    scanf("%s",n);
    for (int i = 0; n[i] != '\0'; i++)
    {
        if(isalpha(n[i]))
        {
        if (n[i] != ' ')
        {
           j=n[i];
           top= push(j,top);


        }
        }
        else
        {
            exit(0);
        }
    }
    d();
    p(n,top);
    return 0;

}
int push(char j,int top)
{
    if(top==size-1)
    {
        printf("Stack overflow.\n");
    }
    else
    {
        top++;
        stack[top]=j;
    }
    return(top);
}
void d()
{
    if(top==-1)
    {
        printf("Stack underflow.\n");
    }
    else
    {
        int i;
        i=top;
         printf("Stack of characters is: \n");
       while(i!=-1)
       {
          printf("%c\n",stack[i]);
           i--;
       }
    }
}
void p(char n[100],int top)
{

    int i, length;
    int flag = 0;

    length = strlen(n);

    for(i=0;i < length ;i++){
        if(n[i] != n[length-i-1]){
            flag = 1;
            break;
           }
        }

    if (flag) {
        printf("%s is not a palindrome string.\n",n);
    }
    else {
        printf("%s is a palindrome string.\n",n);
    }
}
