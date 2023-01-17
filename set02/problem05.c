#include<stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main()
{
  int a,b,gcd;
  a=input();
  b=input();

  gcd=find_gcd(a,b);
  output(a,b,gcd);
  return 0;
}

int input(){
  int n;
  printf("Enter the number :");
  scanf("%d",&n);
  return n;
}
int find_gcd(int a, int b){
  int gcd=0;
  for(int i=1; i<=a || i<=b; i++){
    if(a%i==0 && b%i==0){
      gcd=i;
    }
  }
  return gcd;
}

void output(int a, int b, int gcd){
  printf("gcd of %d and %d is %d",a,b,gcd);
}

/*#include<stdio.h>

int main()
{
    int num1 = 36, num2 = 60, hcf = 1;
    
    for(int i = 1; i <= num1 || i <= num2; i++) {
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }
    
    printf("The HCF: %d", hcf);
    
    return 0;
}*/