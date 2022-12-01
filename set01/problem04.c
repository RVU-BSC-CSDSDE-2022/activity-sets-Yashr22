#include<stdio.h>
int sum (int *a, int *b);
int main()
{
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a,&b);
  int res = sum(&a,&b);
  printf("Sum is %d + %d is %d",a,b,res);
}
int sum (int *a, int *b)
{
  return *a + *b;
}