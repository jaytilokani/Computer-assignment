#include<stdio.h>
int main()
{
  int a;
  printf("enter the value of a\n");
  scanf("%d\n",&a);
  if(a%7==0)
  {
    printf(" the number is divisible by 7");
  }
  else
  {
    printf("the number is not divisible by 7");
  }
}