#include<stdio.h>

int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);

int main(){
  int n,index;
  n=input_size();
  int a[n];
  input_array(n,a);
  index=find_largest_index(n,a);
  output(index);
}
int input_size(){
  int a;
  printf("Enter the size of array :");
  scanf("%d",&a);
  return a;
}
void input_array(int n, int a[n]){
  int count=0;
  for(int i=0; i<n ; i++){
    count=i;
    printf("Element at index %d :",count);
    scanf("%d",&a[i]);
  }
}
int find_largest_index(int n, int a[n]){
  int largest=0,largest_index;
  for(int i=0; i<n; i++){
    if(a[i]>largest){
      largest=a[i];
      largest_index=i;
    }
  }
  return largest_index;
}
void output(int index){
  printf("The index of the largest number in the array is %d",index);
}