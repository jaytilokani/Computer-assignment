#include<stdio.h>
int main()
{
  int hours,minutes;
  printf("enter the number of minutes");
  scanf("%d \n",&minutes);
  hours =minutes/60;
  printf(" hours= %d",hours);
  return 0;
}