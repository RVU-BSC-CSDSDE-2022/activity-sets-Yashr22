#include <stdio.h>

int add_n_Numbers(int n);

int main() {
  int num;
  printf("Enter a integer: ");
  scanf("%d", &num);
  
  printf("Sum = %d", add_n_Numbers(num));
  return 0;
}

int add_n_Numbers(int n){
  int sum;
  for(int i=0;i<=n;i++){
    sum = sum + i;
  }
  return sum;
}