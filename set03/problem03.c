#include<stdio.h>

int input_number();
int is_prime(int n);
void output(int n, int result);

int main(){
  int n,result;
  n=input_number();
  result=is_prime(n);
  output(n ,result);
  return 0;
}

int input_number(){
  int a;
  printf("Enter the number :");
  scanf("%d",&a);
  return a;
}

int is_prime(int n){
  // int result=0,var;
  // for(int i=1; i<=n; i++){
  //   if((n%i) == 0){
  //     var++;
  //   }
  // }
  // if(var>2){
  //   result=1;
  // }
  // else{
  //   result=2;
  // }
  // return result;
  for(int i=2; i<n ;i++){
    if(n%i==0){
      return 1;
    }
  }
  return 2;
}

void output(int n, int result){
  if(result==1){
    printf("%d is not a prime number.",n);
  }
  else if(result==2){
    printf("%d is a prime number,",n);
  }
}