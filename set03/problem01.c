#include<stdio.h>

int input();
float find_distance(float x1, float y1, float x2, float y2);
float output(float x1, float y1, float x2, float y2, float distance);

int main(){
  float x1,x2,y1,y2,distance;
  x1=input();
  y1=input();
  x2=input();
  y2=input();
  distance=find_distance(x1,y1,x2,y2);
  output(x1,y1,x2,y2,distance);
}

int input(){
  int a;
  printf("Enter the number :");
  scanf("%d",&a);
  return a;
}
float find_distance(float x1, float y1, float x2, float y2){
  float distance;
  distance=((x2-x1)*(x2-x1) +(y2-y1)*(y2-y1));
  float x=4;
  while(fabs(x*x-distance)/2>0.0001){
    x=(x+distance/x)/2;
  }
  return x;
  return distance;
}
float output(float x1, float y1, float x2, float y2, float distance){
  printf("The distance between point (%f %f) and (%f %f) is %f",x1,y1,x2,y2,distance);
}