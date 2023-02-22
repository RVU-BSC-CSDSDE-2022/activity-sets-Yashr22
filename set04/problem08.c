#include<stdio.h>

typedef struct fraction{
int num,den;
}fraction;

int input_n();
fraction input_fraction();
void input_n_fraction(int n, fraction f[n]);
int find_gcd(int a, int b);
fraction add_fraction(fraction f1, fraction f2);
fraction add_n_fraction(int n, fraction f[n]);
void output(int n, fraction f[n], fraction sum);

int main(){
  int n;
  n=input_n();
  fraction f[n],sum;
  input_n_fraction(n,f);
  sum=add_n_fraction(n,f);
  output(n,f,sum);
}
int input_n(){
  int size;
  printf("Enter the size of array :");
  scanf("%d",&size);
  return size;
}
fraction input_fraction(){
  fraction f;
  printf("Enter the fraction :");
  scanf("%d %d",&f.num,&f.den);
  return f;
}
void input_n_fraction(int n,fraction f[n]){
  for(int i=0;i<n;i++){
    f[i]=input_fraction();
  }
}
int find_gcd(int a, int b){
  int gcd;
  for(int i=1; i<=a || i<=b; i++){
    if(a%i==0 && b%i==0){
      gcd=i;
    }
  }
  return gcd;
}
fraction add_fraction(fraction f1, fraction f2){
  fraction res={0,0};
  int gcd,lcm;
  gcd=find_gcd(f1.den,f2.den);
  lcm=(f1.den*f2.den)/gcd;
  f1.num=f1.num*(lcm/f1.den);
  f2.num=f2.num*(lcm/f2.den);
  res.num=f1.num+f2.num;
  res.den=lcm;
  return res;
}
fraction add_n_fraction(int n, fraction f[n]){
  fraction result={f[0].num, f[0].den};
  for(int i=1; i<n; i++){
    result=add_fraction(result,f[i]);
  }
  for(int i=1; result.num<=i || result.den<=i;i++){
    if(result.num%i==0 && result.den%i==0){
      result.num=result.num/i;
      result.den=result.den/i;
    }
  }
  return result;
}
void output(int n, fraction f[n], fraction sum){
  int i;
  for(i=0; i<n-1; i++){
    printf("%d/%d + ",f[i].num,f[i].den);
  }
  printf("%d/%d ",f[i].num,f[i].den);
printf("= %d/%d",sum.num,sum.den);
}