#include<stdio.h>
int main()
{
  int i,n;
  int sum =0;
  printf("enter value of n \n");
  scanf("%d\n",&n);
  if(n<0)
  {
    printf("please enter a positive number");
  }
  else{

  for(i=1;i<=n;i++)
  {
    sum=sum+(2*i-1);
  }
  printf("sum of first %d odd natural numbers is %d\n",n,sum);
}
return 0;

}



    