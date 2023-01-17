#include<stdio.h>

float input();
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main()
{
  float base,height,area;
  base=input();
  height=input();
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}

float input(){
  float n;
  printf("Enter base and height:");
  scanf("%f",&n);
  return n;
}

void find_area(float base , float height, float *area){
  *area = (base*height)*(1.0/2.0);
}

void output(float base, float height, float area){
  
  printf("The area of the traingle with base %f and height %f is %f",base,height,area);
}