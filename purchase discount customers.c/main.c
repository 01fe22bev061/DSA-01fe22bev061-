#include <stdio.h>
int main()
{
    float pur_amt,tot_amt;
    printf("enter purchase amount\n");
    scanf("%f",&pur_amt);
    if(pur_amt>10000)
    {
        tot_amt=pur_amt-0.1*pur_amt;
        printf("amount to be paid=%f\n",tot_amt);
    }
    else
    {
        printf("amount to be paid=%f\n",pur_amt);
    }
}
