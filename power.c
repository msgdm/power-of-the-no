#include<stdio.h>
int main()
{
  int a,b,c=1;
  int d=1;
  printf("\nEnter a number");
  scanf("%d",&b);
  printf("\nEnter the power");
  scanf("%d",&a);
  while(c<=a)
  {
  d=d*b;
  c++;
  }
  printf("\n%d",d);
  return 0;
}
