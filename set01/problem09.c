/* #include<stdio.h>
#include<math.h>
int main() {
    int num;
    double result;
               printf("C Program to find square root \n");
    printf("Enter a Number to find square root: ");
    scanf("%d",&num);
    result = sqrt(num);
    printf("Square Root of %d is %.2f",num,result);
}*/


#include <math.h>
#include <stdio.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
  double n ,sqrroot;
  n=input();
  sqrroot=square_root(n);
  output(n, sqrroot);
}  
float input()
{
  float n;
  printf("Enter the number :");
  scanf("%f",&n);
  return n;
}
float square_root(float n)
{
  float x=4;
  while(fabs(x*x-n)/2>0.0001){
    x=(x+n/x)/2;
  }
  return x;
}
void output(float n ,float sqrroot)
{
  printf("Square root of %.2f = %.2f",n,sqrroot);
}

/*
#include <stdio.h>
#include<math.h>


int main()
{
  float s;
  printf("Enter the number :");
  scanf("%f",&s);
  float x=4;
  while(fabs(x*x-s)/2>0.0001){
    x=(x+s/x)/2;
  }
  printf("%f",x);
} */