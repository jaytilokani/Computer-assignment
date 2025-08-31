#include<stdio.h>
int main()
{
  float f,c;
  printf(" enter the temperature in fahrenheit scale\n");
  scanf("%f\n",&f);
  c=5/9.0*(f-32);
  printf("the temperature in celcius scale is%f\n",c);
  return 0;
}