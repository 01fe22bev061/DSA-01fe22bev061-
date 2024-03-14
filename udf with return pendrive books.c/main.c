#include <stdio.h>
#include <stdlib.h>

int main()
{
    float bill(char item,float price);
    float price,amt;
    char item;
    printf("enter item and its price\n");
    scanf("%c%f",&item,&price);
    amt=bill(item,price);
    printf("amount to be paid=%f\n",amt);
}
float bill(char item,float price)
{
    float amount;
    if(item=='B'|| item=='b')
    {
        if(price>=1 && price<=2000)
        {
            amount=price;
        }
        else if(price>=2001 && price<=5000)
        {
            amount= price-0.05*price;
        }
        else if(price>5000)
        {
            amount=price-0.07*price;
        }
        return(amount);
    }
    else if(item=='p'|| item=='p')
    {
        if(price>=1 && price<=500)
        {
            amount=price-0.02*price;
        }
        else if(price>=501 && price<=2000)
        {
            amount=price-0.04*price;
        }
        else if(price>2000)
        {
            amount=price-0.06*price;
        }
        return(amount);
    }
}
