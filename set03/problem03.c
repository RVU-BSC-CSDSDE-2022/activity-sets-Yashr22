#include<stdio.h>
int input_number();
int is_prime(int n);
void output(int n, int result);

int main(){
  int n,result;
  n=input_number();
  result=is_prime(n);
  output(n,result);
}
int input_number(){
  int num;
  printf("Enter the number :");
  scanf("%d",&num);
  return num;
}
int is_prime(int n){
int res;
  for(int i=2; i<n; i++){
    if(n%i==0){
      return 0;
    }
  }
  return 1;
}
void output(int n, int result){
  if(result){
    printf("%d is prime number",n);
  }
  else{
    printf("%d is not a prime number",n);
  }
}