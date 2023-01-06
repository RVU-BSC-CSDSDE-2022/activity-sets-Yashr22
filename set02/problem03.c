/*#include <stdio.h>
int main(){
  int n,i,count=0;
  printf("Enter the number :");
  scanf("%d",&n);
  for(i=1; i<=n; i++){
    if(n%i == 0)
    count++;
  }
  if(count > 2){
    printf("%d is a composite number.",n);
  }
  else{
    printf("%d is not composite number.",n);
  }
  return 0;
}*/
#include <stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

int main(){
  int n,result;
  n=input_number();
  is_composite(n);
  output(n,result);
}
int input_number(){
  int a;
  printf("Enter the number :");
  scanf("%d",&a);
  return a;
}
int is_composite(int n){
  int result=0;
  for(int i=1; i<=n; i++){
    if(n%i == 0)
      result++;
  }
  if(result>2){
    printf("%d is composite.",n);
  }
  else{
    printf("%d is not composite.",n);
  }
}
void output(int n, int result){
}