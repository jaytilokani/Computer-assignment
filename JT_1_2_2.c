#include<stdio.h>
int main()
{
  int a,b,c;
  printf("enter the value of a,b and c\n");
  scanf("%d%d%d\n",&a,&b,&c);
  if(a>=b&&a>=c)
  {
  printf("the greatest value is %d\n ",a);
}
  else if(b>=a&&b>=c)
  {
  printf("the greatest value is%d\n ",b);
}
else
{
  printf( "the greatest value is%d\n ",c);
}
if(a<=b&&a<=c)
{
  printf("smallest value is %d\n",a);
}
else if (b<=a&&b<=c)
{
  printf("smallest value is %d\n",b);
}
else
{
  printf("smallest value is %d\n",c);
}
  return 0;
}