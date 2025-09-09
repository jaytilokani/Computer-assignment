#include<stdio.h>
int main()
{
  int i,n;
  int factorial=1;
  printf("enter the value of n\n");
  scanf("%d\n",& n);
  for(int i=1;i<=n;i++)
  {
    factorial=factorial*i;
  }
  printf("the factorial of %d is equal to %d\n",n,factorial);
  return 0;
}
  
  
  
  
  