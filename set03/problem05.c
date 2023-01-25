#include<stdio.h>

int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main(){
  int n ,a[n];
  n=input_array_size();
  init_array(n, a);
}

int input_array_size(){
  int n;
  printf("Enter the size of array :");
  scanf("%d",&n);
  return n;
}

void init_array(int n, int a[n]){
  for(int i=0; i<n; i++){
    printf("Element at index %d :",i);
    scanf("%d",&a[i]);
  }
}