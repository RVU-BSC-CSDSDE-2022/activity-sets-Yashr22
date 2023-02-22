#include<stdio.h>

void input_camel_detail(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, float mood);

int main(){
  float radius,height,length,mood;
  input_camel_detail(&radius, &height,&length);
  mood=find_mood(radius,height,length);
  output(radius,height,length,mood);
}

void input_camel_detail(float *radius, float *height, float *length){
  printf("Enter radius :");
  scanf("%f",&*radius);
  printf("Enter height :");
  scanf("%f",&*height);
  printf("Enter length :");
  scanf("%f",&*length);
}

int find_mood(float radius, float height, float length){

  int result;
  if(radius<height && radius<length){
    result=0;
  }
  else if(height<length){
    result=1;
  }
  else{
    result=-1;
  } 
  return result;
}

void output(float radius, float height, float length, float mood){
  if(mood==0){
    printf("Camel is sick.");
  }
  else if(mood==1){
    printf("Camel is happy.");
  }
  else{
    printf("Camel is tense");
  }
}
