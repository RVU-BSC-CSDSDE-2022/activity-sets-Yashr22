#include<stdio.h>

typedef struct point{
float x,y;
}point;

typedef struct line{
point p1,p2;
float distance;
}line;

point input_point();
line input_line();
void find_length(line *l);
void output(line l);

int main(){
  float x,y,p1,p2;
  x=input_point
}

point input_point(){
  float a;
  printf("Enter the point :");
  scanf("%f",&a);
  return a;
}

line input_line(){
  float b;
  printf("Enter the line :");
  scanf("%f",&b);
  return b;
}

void find_length(){
  
}