#include<stdio.h>
int main()
{
  float f,c;
  printf(" enter the temperature in celcius scale\n");
  scanf("%f\n",&c);
  f=((9/5.0)*c)+32;
  printf("the temperature in fahrenheit scale is%f\n",f);
  return 0;
}