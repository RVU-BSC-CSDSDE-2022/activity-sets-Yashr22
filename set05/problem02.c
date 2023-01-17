#include<stdio.h>
#include<math.h>

int input_camel_details();
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main(){
  double radius, height, length,weight;
  radius=input_camel_details();
  height=input_camel_details();
  length=input_camel_details();
  weight=find_weight(radius,height,length);
  output(radius,height,length,weight);
  return 0;
}

int input_camel_details(){
  int n;
  printf("Ente camel detail :");
  scanf("%d",&n);
  return n;
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