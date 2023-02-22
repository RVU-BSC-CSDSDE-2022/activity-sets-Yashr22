#include<stdio.h>
int input();
float borga_x(int x);
void output(int x, float result);

int main(){
  int x;
  float result;
  x=input();
  result=borga_x(x);
  output(x,result);
}
int input(){
  int a;
  printf("Enter the number :");
  scanf("%d",&a);
  return a;
}
float borga_x(int x){
  float borga,pow,fac,y;
  pow=1.0;
  fac=1.0;
  y=0.0;
  borga=0.0;
  int i=1;
  while(1){
    y=pow/fac;
    fac=fac*(i*2)*(i*2+1);
    pow=pow*x;
    i++;
    borga=y+borga;
    if(y<0.000001){
      break;
    }
  }
  return borga;
}
void output(int x, float result){
  printf("Borga (%d)=%f",x,result);
}