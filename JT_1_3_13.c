#include<stdio.h>
int main()
{
  int i;
  int sum=0;
  for (i=0;i<=100;i++)
  {
  if(i%13==0)
  {
    sum=sum +i;
  }
  
}
printf("sum of all numbers divisible by 13 in the range of 1 to 100 is %d\n", sum);
return 0;
}

   
  