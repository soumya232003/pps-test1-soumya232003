#include<stdio.h>
void cmp(int a,int b,int c,int *large)
{
  if(a>b && a>c)
  {
    *large=a;
  }
 else if(b>c)
 {
   *large=b;
 }
 else
 {
   *large= c;
 }
}
void input(int *a,int *b,int *c)
{
  printf("enter the value of three numbers\n");
  scanf("%d%d%d",a,b,c);
}
int main()
{
  int x,y,z,large;
  input(&x,&y,&z);
  cmp(x,y,z,&large);
  printf("the large number is %d",large);
  return 0;
}