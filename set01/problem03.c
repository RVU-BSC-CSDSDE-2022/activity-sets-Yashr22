#include <stdio.h>

int input();
int add(int a, int b);
void output(int a, int b, int sum);

int main()
{
  int a,b,sum;
  a=input();
  b=input();
  add(a,b);
  output(a,b,sum);
}

int input(){
  int n;
  printf("Enter the number:");
  scanf("%d",&n);
  return n;
}

int add(int a,int b){
  return a+b;
}

void output(int a, int b, int sum){
  sum = a+b;
  printf("The sum of %d and %d is %d",a,b,sum);
}
