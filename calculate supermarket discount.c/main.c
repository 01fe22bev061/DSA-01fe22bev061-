#include <stdio.h>
int main()
{
    int pur_amt;
    float tot_bill;
    printf("enter purchase amount\n");
    scanf("%d",&pur_amt);
    if(pur_amt>=1&&pur_amt<=1000)
    {
        printf("total bill=%d\n",pur_amt);
    }
    else if(pur_amt>=1001&&pur_amt<=5000)
    {
        tot_bill=pur_amt-0.02*pur_amt;
        printf("total bill=%f\n",tot_bill);
    }
    else if(pur_amt>=5001&&pur_amt<=10000)
    {
        tot_bill=pur_amt-0.03-pur_amt;
        printf("total bill=%f\n",tot_bill);
    }
    else
    {
        tot_bill=pur_amt-0.05*pur_amt;
        printf("total bill=%f\n",tot_bill);
    }

}
