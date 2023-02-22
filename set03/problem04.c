#include <stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);

int main(){
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n, fibo);
  return 0;
}

int input(){
  int n;
  printf("Enter the number :");
  scanf("%d",&n);
  return n;
}

int find_fibo(int n){
  if(n<=1)
    return n;
  return find_fibo(n-1) + find_fibo(n-2);
}

void output(int n, int fibo){
  printf("fibo (%d) = %d",n,fibo);
}
/*#include<stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);

int main(){
  int n, fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
}
int input(){
  int num;
  printf("Enter the number :");
  scanf("%d",&num);
  return num;
}
int find_fibo(int n){
  int a=0,b=1,c;
  if(n==0){
    return a;
  }
  for(int i=2; i<=n; i++){
    c=a+b;
    a=b;
    b=c;
  }
  return b;
}
void output(int n, int fibo){
  printf("fibo (%d) = %d",n,fibo);
}*/