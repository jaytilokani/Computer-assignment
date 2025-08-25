#include<stdio.h>
int main()
{
  int dollars, rupees;
  printf("enter the amount in rupees \n ");
  scanf( "%d \n", &rupees);
 dollars= rupees/48;
 printf("the amount in dollars is %d \n",dollars);
  return 0;
}