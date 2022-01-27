#include<stdio.h>
int cmp(int a,int b,int c)
{
  if (a>b && a>c)
  {
    return a;
  }
  else if(b>a && b>c)
  {
   return b;
  }
  else
  {
   return c;
  }
}
int input()
{
  int p;
  printf("enter the value \n");
  scanf("%d",&p);
  return p;
}
int main()
{
  int a,b,c,large;
  a=input();
  b=input();
  c=input();
  large=cmp(a,b,c);
  printf("%d is large",large);
  return 0;
}