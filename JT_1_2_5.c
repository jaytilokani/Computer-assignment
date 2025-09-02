#include<stdio.h>
int main()
{
  float net_sales, gross_sales,discount;
  printf(" enter the gross sales amount\n");
  scanf("%f\n",&gross_sales);
  if(gross_sales>20000)
  {
 discount=0.15*gross_sales;
 net_sales=gross_sales-discount;
 printf(" net sales is %f\n",net_sales);
 }
 else if(gross_sales>10000)
 {
   discount=0.1*gross_sales;
net_sales=gross_sales-discount;
 printf(" net sales is %f\n",net_sales);
 }
 else
 {
discount=0.05*gross_sales;
net_sales=gross_sales-discount;
 printf(" net sales is %f\n",net_sales);
 }
 return 0;
 }