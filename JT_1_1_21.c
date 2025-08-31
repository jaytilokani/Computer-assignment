#include<stdio.h>
int main()
{
  float gross_salary, allowance,deduction,net_salary;
  printf("enter the gross salary\n");
  scanf("%f\n",& gross_salary);
 allowance=0.1*gross_salary;
 deduction= 0.03*gross_salary;
 net_salary= gross_salary +allowance-deduction;
 printf("net salary is %f\n", net_salary);
 return 0;
 }