#include<stdio.h>

int input_triangle();
int is_traingle(float x1, float y1, float x2, float y2, float x3, float y3);
void output(float x1, float y1, float x2, float y2, float x3, float y3, int result);

int main(){
  float x1,y1,x2,y2,x3,y3;
  int result;
  x1=input_triangle();
  y1=input_triangle();
  x2=input_triangle();
  y2=input_triangle();
  x3=input_triangle();
  y3=input_triangle();
  result=is_traingle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,result);
}

int input_triangle(){
  float s;
  printf("Enter the sides of triangle :");
  scanf("%f",&s);
  return s;
}

int is_traingle(float x1, float y1, float x2, float y2, float x3, float y3){
  float result;
  result=(x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2));
  if(result==0){
    return 1;
  }
  else{
    return 2;
  }
}

void output(float x1, float y1, float x2, float y2, float x3, float y3, int result){
  if(result=1){
    printf("The point (%f %f), (%f %f) and (%f %f) is not a triangle.",x1,y1,x2,y2,x3,y3);
  }
  else if(result=2){
    printf("The point (%f %f), (%f %f) and (%f %f) is a triangle.",x1,y1,x2,y2,x3,y3);
  }
}