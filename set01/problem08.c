#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);

int main() {
  int n,sum=0;
  n=input_array_size();
  int a[n];
  input_array(n, a);
  sum=sum_n_array(n, a);
  output(n,a,sum);
}
int input_array_size(){
  int n;
  printf("Enter the size of array :");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n]){
  printf("Enter element of an array :");
  for(int i; i<n; i++){
    scanf("%d",&a[i]);
  }
}
int sum_n_array(int n, int a[n]){
  int sum;
  for(int i; i<n; i++){
    sum=sum+a[i];
  }
  return sum;
}
void output(int n, int a[n],int sum){
  printf("The sum of ");
  for(int i; i<n; i++){
    printf("%d",a[i]);
  }
  printf("is %d",sum);
}