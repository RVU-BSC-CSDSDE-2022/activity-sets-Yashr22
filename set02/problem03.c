#include <stdio.h>

int is_composite(int n);

int main()
{
  int a,n;
  printf("Enter the number :");
  scanf("%d",&a);
  is_composite(n);
  return 0;
}

int is_composite(int n){
  if (n%2 == 0){
    printf("%d is a composite number.",n);
  }
  else{
    printf("%d is not a composite number.");
  }
}