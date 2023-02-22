#include<stdio.h>

void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

int main(){
  int num1, num2, den1, den2;
  int res_num, res_den;
  input(&num1,&den1, &num2, &den2);
  add(num1, den1, num2, den2, &res_num, &res_den);
  output(num1, den1, num2, den2, res_num, res_den);
}
void input(int *num1, int *den1, int *num2, int *den2){
  printf("Enter the 1st fraction :");
  scanf("%d%d",num1,den1);
  printf("Enterh the 2nd fraction :");
  scanf("%d%d",num2,den2);
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den){
  int hcf,lcm;
  for(int i=1; den1<=i || den2<=i; i++){
    if(den1%i==0 && den2%i==0){
      hcf=i;
    }
  }
  lcm=(den1*den2)/hcf;
  num1=num1*(lcm/den1);
  num2=num2*(lcm/den2);
  *res_num=num1+num2;
  *res_den=lcm;
  for(int i=1; i<=*res_num || i<=*res_den; i++){
    if(*res_num%i==0 && *res_den%i==0){
      *res_num=*res_num/i;
      *res_den=*res_den/i;
    }
  }
}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den){
  printf("%d/%d + %d/%d = %d/%d",num1, den1, num2, den2, res_num, res_den);
}