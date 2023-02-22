#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main(){
  float x1,x2,y1,y2,x3,y3;
  int result;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  result=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,result);
}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
  printf("Enter the coordinate for 1st point :");
  scanf("%f%f",x1,y1);
  printf("Enter the coordinate for 2nd point :");
  scanf("%f%f",x2,y2);
  printf("Enter the coordinate for 2nd point :");
  scanf("%f%f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){
  int res;
  if((x1==x2 && y1==y2) || (x2==x3 && y2==y3) || (x3==x1 || y3==y1)){
    return 0;
  }
  float slope1 = (y2-y1)/(x2=x1);
  float slope2 = (y3-y2)/(x3-x2);
  float slope3 = (y1-y2)/(x1-x2);
  if(slope1==slope2 && slope1==slope3){
    return 0;
  }
  return 1;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result){
  if(result){
    printf("The points (%.1f, %.1f), (%.1f, %.1f) and (%.1f, %.1f) form a triangle",x1,y1,x2,y2,x3,y3);
  }
  else{
    printf("The points (%.1f, %.1f), (%.1f, %.1f) and (%.1f, %.1f) do not form a triangle",x1,y1,x2,y2,x3,y3);
  }
}