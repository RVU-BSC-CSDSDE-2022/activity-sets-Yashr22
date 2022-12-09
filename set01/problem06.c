/*#include<stdio.h>
int main()
{
  int a, b ,c;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &a,&b,&c);
  
  int number=compare(&a,&b,&c);
}
int compare(int *a, int *b, int *c){
  if(*a>*b && *a>*c){
    printf("a is the largest.");
  }
  else if(*b>*a && *b>*c){
    printf("b is the largest.");
  }
  else if(*c>*a && *c>*b){
    printf("c is the largest.");
  }
}*/

#include<stdio.h>

int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main()
{
  int a,b,c,*largest;
  a=input();
  b=input();
  c=input();
  compare(a,b,c,&largest);
  output(a,b,c,largest);
  return 0;
}

int input()
{
  int n;
  printf("Enter the number:\n");
  scanf("%d",&n);
  return n;
}

void compare(int a, int b, int c,int *largest){
  if((a>b) && (a>c))
    *largest = a;
  if((b>a) && (b>c))
    *largest = b;
  if((c>a) && (c>b))
    *largest = c;
}

void output(int a, int b, int c, int largest){
  printf("The large of %d, %d and %d is %d",a,b,c,largest);
}