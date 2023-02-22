#include <stdio.h>

int input_array_size();
void input_array(int n, int arr[n]);
int sum_composite_numbers(int n, int arr[n]);
void output(int sum);

int main()
{
  int n,sum;
  n=input_array_size();
  int arr[n];
  input_array(n,arr);
  sum = sum_composite_numbers( n, arr);
  output(sum);
}

int input_array_size(){
  int n;
  printf("Enter the size of arr:");
  scanf("%d",&n);
  return n;
}

void input_array(int n, int arr[n]){
  for(int i=0; i<n; i++){
    printf("Enter the number %d:",i+1);
    scanf("%d",&arr[i]);
  }
}

int sum_composite_numbers(int n, int arr[n]){
  int sum=0;
  for(int i=0; i<n; i++)
  {
    int count=0;
    for(int j=1; j<=arr[i]; j++)
    {
      if(arr[i]%j == 0)
      {
        count++;
      }
    }
    if(count>2){
        sum=sum+arr[i];
    }
  }
  return sum;
}

void output(int sum){
  printf("Sum is %d",sum);
}