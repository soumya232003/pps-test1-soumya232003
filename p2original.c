#include<stdio.h>
int input()
{
 int a;
printf("enter the value of a \n");
scanf("%d",&a);
return a;
}
int find_sum(int a,int b)
{
int sum;
sum=a+b;
return sum;
}
void output(int a, int b,int sum)
{
printf("sum of %d +%d is %d",a,b,sum);
}
int main()
{
int x,y,z;
x=input();
y=input();
z=find_sum(x,y);
output(x,y,z);
return 0;
}