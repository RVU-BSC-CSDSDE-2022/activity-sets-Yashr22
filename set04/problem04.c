#include<stdio.h>

int input_degree();
void input_cofficient(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);

int main(){
  int n;
  float x, result;
  n=input_degree();
  float a[n];
  input_cofficient(n,a);
  x=input_x();
  result=evaluate_polynomial(n,a,x);
  output(n,a,x,result);
}
int input_degree(){
  int degree;
  printf("Enter the degree :");
  scanf("%d",&degree);
  return degree;
}
void input_cofficient(int n, float a[n]){
  for(int i=0; i<n+1; i++){
    int count_no=i+1;
    printf("Enter the cofficient no.%d :",count_no);
    scanf("%f",&a[i]);
  }
}
float input_x(){
  float a;
  printf("Enter x :");
  scanf("%f",&a);
  return a;
}
float evaluate_polynomial(int n, float a[n], float x){
  float res;
  res=a[0];
  for(int i=1; i<n+1; i++){
    res=res * x + a[i];
  }
  return res;
}
void output(int n, float a[n], float x, float result){
  int i;
  printf("H(%d,",n);
  for(i=0; i<n; i++){
    printf("%.1f,",a[i]);
  }
  printf("%.1f) = %.1f",x,result);
}