/*#include<stdio.h>
struct complex {
	float real,img;
};
typedef struct complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main(){
  int n = get_n();
  Complex c[n],result;
  input_n_complex(n,c);
  result = add_n_complex(n,c);
  output(n,c,result);
}

int get_n(){
  int a;
  printf("Enter a number.\n");
  scanf("%d", &a);
  return(a);
}

Complex input_complex(){
  Complex a;
  printf("Enter a and b where a + ib is the first complex number.\n");
   scanf("%f%f", &a.real, &a.img);
  return(a);
}

void input_n_complex(int n, Complex c[n]){
  int i;
  for(i = 0;i<n;i++){
    c[i] = input_complex();
  }
}

Complex add(Complex a, Complex b){
  Complex sum;
  sum.real = a.real+b.real;
  sum.img = a.img+b.img;
  return(sum);
}

Complex add_n_complex(int n, Complex c[n]){
  int i;
  Complex sum = {0,0};
  for(i = 0;i<n;i++){
    sum = add(sum,c[i]);
  }
}

void output(int n, Complex c[n], Complex result){
  int i;
  for(i = 0;i<n-1;i++){
    printf("%f+%fi + ",c[i].real,c[i].img);
  }
  printf("%f+%fi ",c[n-1].real,c[n-1].img);
  printf("is %f+%fi",result.real,result.img);
}*/

# include<stdio.h>
struct complex {
 float real,img;
};

typedef struct complex complex;

int get_n();
complex input_complex();
void input_n_complex(int n, complex c[n]);
complex add(complex a, complex b);
complex add_n_complex(int n, complex c[n]);
void output(int n, complex c[n], complex result);

int main(){
  int n=get_n();
  complex c[n],result;
  input_n_complex(n,c);
  result = add_n_complex(n,c);
  output(n,c,result);
}
int get_n(){
  int a;
  printf("Enter a number :");
  scanf("%d",&a);
  return a;
}
complex input_complex(){
  complex c1;
  printf("Enter the real part :");
  scanf("%f",&c1.real);
  printf("Eneter the img part :");
  scanf("%f",&c1.img);
  return c1;
}
void input_n_complex(int n, complex c[n]){
  int i;
  for(i=0; i<n; i++){
    c[i]=input_complex();
  }
}
complex add(complex a, complex b){
  complex sum;
  sum.real=a.real+b.real;
  sum.img=a.img+b.img;
  return sum;
}
complex add_n_complex(int n, complex c[n]){
  int i;
  complex sum={0,0};
  for(i=0; i<n; i++){
    sum=add(sum,c[i]);
  }
}
void output(int n, complex c[n], complex result){
  int i;
  for(i=0; i<n; i++){
    printf("%f+i%f",c[i].real,c[i].img);
  }
  printf("%f+i%f",c[n-1].real,c[n-1].img);
  printf("is %f+i%f", result.real,result.img);
}