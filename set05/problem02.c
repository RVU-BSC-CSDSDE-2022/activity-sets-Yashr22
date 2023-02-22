#include<stdio.h>
#include<math.h>

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main(){
  float radius, height, length,weight;
  input_camel_details(&radius,&height,&length);
  weight=find_weight(radius,height,length);
  output(radius,height,length,weight);
  return 0;
}

void input_camel_details(float *radius, float *height, float *length){
  printf("Ente radius :");
  scanf("%f",radius);
  printf("Enter height :");
  scanf("%f",height);
  printf("enter length :");
  scanf("%f",length);
}

float find_weight(float radius, float height, float length){
  //weight = pi * stomach_radius^3 * sqrt(height * length)
  float w;
  w=height*length;
  float x=4;
  while(fabs(x*x-w)/2>0.0001){
    x=(x+w/x)/2;
  }
  // return x;

  float p;
  p=3.1415*radius*radius*radius;
  
  float weight=x*p;
  return weight;
}

void output(float radius, float height, float length, float weight){
  printf("The weight of the camel with radius: %f, height: %f, length: %f is %f",radius,height,length,weight);
}