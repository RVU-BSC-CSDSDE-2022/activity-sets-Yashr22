#include<stdio.h>

int input_camel_detail();
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, float mood);

int main(){
  float radius,height,length,mood;
  radius=input_camel_detail();
  height=input_camel_detail();
  length=input_camel_detail();
  find_mood(radius,height,length);
  output(radius,height,length,mood);
}

int input_camel_detail(){
  int n;
  printf("Enter camel detail :");
  scanf("%d",&n);
  return n;
}

int find_mood(float radius, float height, float length){
  // float x=length+height;
  int mood;
  if(radius < height < length)
    mood=1;
  
  else if(height < length < radius)
    mood=2;
    
}

void output(float radius, float height, float length, float mood){
  if(mood==1){
    printf("Camel is sad.");
  }
  else if(mood==2){
    printf("Camel is happy.");
  }
}