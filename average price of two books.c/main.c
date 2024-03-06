#include<stdio.h>
struct book
{
   char title[20];
   char author[30];
   float price;
   int page;
};

main()
{
   struct book b1,b2;
   void average_price(struct book b1,struct book b2);
   printf("enter title, author, price and pages of book1\n");
   scanf("%s%s%f%d",&b1.title,&b1.author,&b1.price,&b1.page);

   printf("enter title, author, price and pages of book2\n");
   scanf("%s%s%f%d",&b2.title,&b2.author,&b2.price,&b2.page);

   average_price(b1,b2);
}

void average_price(struct book b1,struct book b2)
{
float avg;
avg=(b1.price+b2.price)/2;
printf("average price=%f\n",avg);
}
