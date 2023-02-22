#include<stdio.h>
int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main(){
  int n;
  float avg;
  n=input_n();
  int a[n];
  input(n,a);
  avg=odd_average(n,a);
  output(avg);
}
int input_n(){
  int size;
  printf("Enter the size of array :");
  scanf("%d",&size);
  return size;
}
void input(int n, int a[n]){
  for(int i=0; i<n; i++){
    printf("Enter the element in index %d :",i);
    scanf("%d",&a[i]);
  }
}
float odd_average(int n, int a[n]){
  float sum,count,result;
  sum=0.0;
  for(int i; i<n; i++){
    if(a[i]%2!=0){
      sum=a[i]+sum;
      count++;
    }
  }
  result=sum/count;
  return result;
}
void output(float avg){
  printf("Average of all the odd elements is :%.2f",avg);
}