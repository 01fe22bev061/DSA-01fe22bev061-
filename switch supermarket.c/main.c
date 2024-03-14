#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pur_amt;
    float tot_bill;
    printf("enter purchase amount\n");
    scanf("%d",&pur_amt);
    if(pur_amt>=0)
    {
    switch(pur_amt)
    {
        case 1 ... 1000:tot_bill=pur_amt;
        printf("total bill=%d\n",pur_amt);
        break;
        case 1001 ... 5000:tot_bill=pur_amt-0.02*pur_amt;
        printf("total bill=%f\n",tot_bill);
        break;
        case 5001 ... 10000:tot_bill=pur_amt-0.03*pur_amt;
        printf("total bill=%f\n",tot_bill);
        break;
        default:tot_bill=pur_amt-0.05*pur_amt;
        printf("total bill=%f\n",tot_bill);
    }
    }
    else
    {
        printf("invalid pur_amt");
    }
}


