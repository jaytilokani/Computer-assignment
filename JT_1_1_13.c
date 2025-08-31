#include<stdio.h>
int main()
{
  float byte, mb,kb,gb;
  printf("enter the number of bytes\n");
  scanf("%f\n",&byte);
  kb=byte/1000;
  mb=kb/1000;
  gb=mb/1000;
  printf("kb=%f\n",kb);
  printf("mb=%f\n",mb);
  printf("gb=%f\n",gb);
  return 0;
}
  
 