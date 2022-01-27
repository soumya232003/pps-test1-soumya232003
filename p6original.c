#include<stdio.h>
int main()
{
  int i, n, sum=0;

  printf(" enter the number\n");
  scanf("%d" , &n);

  for(i=1; i<n; i++)
  {
    sum= sum + i;
  }

  for(i=1; i<n; i++)
  {
    printf("%d+\n",i);
  }
  printf("%d is %d\n" ,i, sum);
  return 0;
}