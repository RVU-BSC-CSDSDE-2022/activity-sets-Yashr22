#include<stdio.h>
typedef struct {
int num,den;
}fraction;

fraction input();
fraction find_smallest(fraction f1,fraction f2,fraction f3);
void output(fraction f1, fraction f2, fraction f3, fraction result);

int main(){
  fraction f1,f2,f3,result;
  f1=input();
  f2=input();
  f3=input();
  result=find_smallest(f1,f2,f3);
  output(f1,f2,f3,result);
}
fraction input(){
  fraction f;
  printf("Enput a fraction :");
  scanf("%d%d",&f.num,&f.den);
  return f;
}
fraction find_smallest(fraction f1,fraction f2, fraction f3){
  fraction small;
  int hcf,lcm;
  int num1,num2,num3;
  for(int i=1; f1.den<=i || f2.den<=i || f3.den<=i; i++){
    if(f1.den%i==0 && f2.den%i==0 && f3.den%i==0){
      hcf=i;
    }
  }
  lcm=(f1.den*f2.den*f3.den)*hcf;
  num1=f1.num*(lcm/f1.den);
  num2=f2.num*(lcm/f2.den);
  num3=f3.num*(lcm/f3.den);
  if(num1<num2 && num2<num3){
    small=f1;
  }
  else if(num2<num3){
    small=f2;
  }
  else{
    small=f3;
  }
  return small;
}
void output(fraction f1, fraction f2,fraction f3, fraction result){
  printf("The smallest of %d/%d, %d/%d and %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,result.num,result.den);
}
