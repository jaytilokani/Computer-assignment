#include<stdio.h>
int main()
{
  float i,p,r,n;
  printf("enter the value of principle amount,rate of interest and time in years\n");
  scanf("%f%f%f\n",&p,&r,&n);
  i=(p*r*n) /100.000;
  printf("interest amount=%f\n",i);
  return 0;
}