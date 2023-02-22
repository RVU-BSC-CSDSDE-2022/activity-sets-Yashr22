/*#include<stdio.h>
struct camel{
float radius, height, length, weight;
};

typedef struct camel camel;
camel input();
float find_weight(camel c);
void output(camel c);

int main(){
  camel c;
  
}
camel input(){
  camel c;
  printf("Enter the camel radius :");
  scanf("%f",c.radius);
  printf("Enter the camel height :");
  scanf("%f",c.height);
  printf("Enter the camel length :");
  scanf("%f",c.length);
  return c;
}
float find_weight(camel c){
  float height,length
  float w;
  w=height*length;
  float x=4;
  while(fabs(x*x-w)/2>0.0001){
    x=(x+w/x)/2;
  }
  // return x;

  float p;
  p=3.1415*radius*radius*radius;
  
  float c=x*p;
  return c;
}
void output(camel c){
  printf("The weight of the camel with radius: %f, height: %f, length: %f is %f",c.radius,c.height,c.length,c.);
}*/
#include <math.h>
#include <stdio.h>

struct camel {
   float radius, height, length, weight;
};

typedef struct camel Camel;

Camel input();
void find_weight(Camel *c);
void output(Camel c);

int main() {
  Camel c;
  c=input();
  find_weight(&c);
  output(c);
  return 0;
}

Camel input() {
  Camel c;
  printf("Enter stomach radius of the camel: ");
  scanf("%f",&c.radius);
  printf("Enter height of the camel: ");
  scanf("%f",&c.height);
  printf("Enter length of the camel: ");
  scanf("%f",&c.length);
  return c;
}

void find_weight(Camel *c) {
  float product,pi;
  product = sqrt(c->height * c->length);
  pi = 22.0/7.0;
  c->weight= pi * (c->radius * c->radius * c->radius) * product;
}

void output(Camel c) {
  printf("The weight of the camel with radius: %.1f, height: %.1f and length: %.1f is %f \n", c.radius, c.height, c.length, c.weight);
}