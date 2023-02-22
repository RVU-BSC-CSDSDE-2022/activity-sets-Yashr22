#include<stdio.h>

void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);

int main(){
  int n,r,result;
  input_n_and_r(&n,&r);
  result=nCr(n,r);
  output(n,r,result);
}
void input_n_and_r(int *n, int *r){
  printf("Enter n :");
  scanf("%d",n);
  printf("Enter r :");
  scanf("%d",r);
}
int nCr(int n, int r){
  int nCr;
  int factorial_n,factorial_r,diff,diff_factorial;
  diff=n-r;
  factorial_n=1;
  factorial_r=1;
  diff_factorial=1;
  for(int i=1; i<=n; i++){
    factorial_n=factorial_n*i;
  }
  for(int i=1; i<=r; i++){
    factorial_r=factorial_r*i;
  }
  for(int i=1; i<=diff; i++){
    diff_factorial=diff_factorial*i;
  }
  nCr=(factorial_n)/(factorial_r * diff_factorial);
  return nCr;
}
void output(int n, int r, int result){
  printf("for n = %d and r = %d, nCr = %d",n,r,result);
}