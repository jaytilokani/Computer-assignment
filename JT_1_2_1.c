#include<stdio.h>
int main()
{
  int a,b;
  printf("enter the value of a and b\n");
  scanf("%d%d\n",&a,&b);
  if(a>b)
  {
  printf("the greatest of two values is %d\n",a);
}
  else if(b>a)
  {
  printf("the greatest of two values is%d\n ",b);
}
else
{
  printf("both are equal");
}
if(a<b)
{
  printf("the smallest of two values is%d\n ",a);
}
else
{
  printf("smallest value is %d\n",b);
}

  return 0;
}