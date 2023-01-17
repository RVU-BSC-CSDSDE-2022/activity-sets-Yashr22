#include<stdio.h>
#include<math.h>

struct _point{
float x, y;
};

typedef struct _point point;

point input();
void dist(point a, point b, point *res);
void output(point a, point b, point res);

int main(){
  point a,b,res,
  a=input();
  b=input();
  res=dist(a,b,&res);
  output(a,b,res);
}

point input(){
  point p1;
  printf("Enter pont a :");
  scanf("%f",&p1.a);
  printf("Enter point b :");
  scanf("%f",&p1.b);
  return p1;
}

void dist(point a, point b, point *res){
  res=(b.x-a.x)*(b.x-a.x)+(b.y-a.y);
  float x=4;
  while(fabs(x*x-res)/2>0.0001){
    x=(x+res/x)/2;
  }
  return x;
  return res;
}
void output(point a, point b, point res){
  printf("The Distance between (%f,%f) and (%f,%f) is %f",a.x,a.y,b.x,b.y,res);
}