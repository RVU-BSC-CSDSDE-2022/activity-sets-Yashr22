#include<stdio.h>

int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main(){
  int n;
  n=input_array_size();
  int a[n];
  init_array(n, a);
  erotosthenes_sieve(n,a);
  output(n,a);
}

int input_array_size(){
  int n;
  printf("Enter the size of array :");
  scanf("%d",&n);
  return n;
}

void init_array(int n, int a[n]){
  a[n+1];
  for(int i=1; i<=n; i++){
    a[i]=i;
  }
}
void erotosthenes_sieve(int n, int a[n]){
  int i,j;
  for(i=2; i*i<=n; i++){
    if(a[i]!=-1){
      for(j=2*i; j<=n; j+=i)
        a[j]=-1;
    }
  }
}
void output(int n, int a[n]){
  printf("Prime numbers are :");
  for(int i=2; i<=n; i++){
    if(a[i] != -1){
      printf("%d\t",i);
    }
  }
}