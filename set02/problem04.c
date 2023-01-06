/*#include <stdio.h>

int input_array_size();
void input_array(int n, int arr[n]);
int sum_composite_numbers(int n, int arr[n]);
void output(int sum);

int main()
{
  int n,sum;
  int arr[n];
  n=input_array_size();

  input_array(n,&arr[n]);
  sum = sum_composite_numbers( n, &arr[n]);
  output(sum);
}

int input_array_size(){
  int n;
  printf("Enter the size of arr: %d",n);
  if(scanf("%d",&n)){}
  return n;
}

void input_array(int n, int arr[]){
  for(int i=n; arr[i]!='\0'; i++){
    printf("%c",arr[i]);
  }
  printf("/n");
}

int sum_composite_numbers(int n, int arr[]){
  int isprime=0,sum=0;
  for(int i=0; i<n; i++){
    for(int count=2; count<arr[i]/2; count++){
      if(arr[i]%count == 0){
        isprime=1;
      }
      if(isprime=1){
        sum=sum+arr[i];
      }
    }
  }
  return sum;
}

void output(int sum){
  printf("%d",sum);
}*/

#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
int main()
{
  int n, a[n], sum;
  n = input_array_size();
  input_array(n, &a[n]);
  sum = sum_composite_numbers(n, &a[n]);
  output(sum);
}
int input_array_size(){
  int n;
  printf("enter the size of the array: ");
  if(scanf("%d", &n));
  return n;
}
void input_array(int n, int a[n])
{
  int i;
  printf("Enter the elements for the array: ");
  for(i=0; i<n;i++){
   if(scanf("%d", &a[i]));
    }
}
int sum_composite_numbers(int n, int a[n])
{
  int count=0,i,sum;
  for(i=1; i<=n; i++){
    if(a[n]%i==0){
      sum=sum+i;
    }
  }
  return sum;
}
void output(int sum)
{
  printf("sum is %d: \n",sum);
}