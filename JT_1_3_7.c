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
    sum=sum+i;
  }
  printf("sum of first %d natural numbers is %d\n",n,sum);
}
return 0;

}



    