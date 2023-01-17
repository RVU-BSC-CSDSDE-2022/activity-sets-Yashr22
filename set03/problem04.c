#include <stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);

int main(){
  int n,fibo;
  n=input();
  find_fibo(n);
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
  int fibo;
  if(n==1){
    return 0;
  }
  else if(n==2){
    return 1;
  }
  else if(n==3){
    return 0;
  }
  else{
    fibo=fibo(n-1) + fibo(n-2);
  }
}

void output(int n, int fibo){
  printf("fibo (%d) = %d",n,fibo);
}