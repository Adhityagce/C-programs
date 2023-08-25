#include <stdio.h>
void main()
{
  int n,fact=1;
  printf("enter the number:");
  scanf("%d",&n);
  if(n==0 || n==1)
         printf("the factorial is 1");
  while(n>=1)
  {
     fact*=n;
     n--;
  }
  printf("the factorial is %d\n",fact);

}