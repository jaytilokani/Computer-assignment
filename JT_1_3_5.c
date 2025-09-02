#include<stdio.h>
int main()
{
  int i,n;
  printf("enter the value of n \n");
  scanf("%d\n",&n);
  for (int i=1;i<=2*n;i+=2)
  {
    printf("%d\n",i);
  }
  return 0;
}
  