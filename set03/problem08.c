#include<stdio.h>
#include<math.h>

typedef struct point{
float x,y;
}point;

typedef struct polygon{
int side;
point p[100];
float perimeter;
}polygon;

int input_n();
point input_point(char *prompt_msg);
void input_polygon(polygon *p);
float find_distance(point a, point b);
void find_perimeter(polygon* p);
void output(polygon p);

int main(){
  polygon p;
  input_polygon(&p);
  find_perimeter(&p);
  output(p);
}
int input_n(){
  int no;
  printf("Enter the number :");
  scanf("%d",&no);
  return no;
}
point input_point(char *promt_msg){
  printf("%s",promt_msg);
  point le;
  printf("Enter the point of line :");
  scanf("%f%f",&le.x,&le.y);
  return le;
}
float find_distance(point a, point b){
  float distance;
  distance=sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2));
  return distance;
}
void input_polygon(polygon *p){
  p->side=input_n();
  for(int i=0; i<(p->side); i++){
    p->p[i]=input_point("Enter x and y coordinate\n");
  }
}
void find_perimeter(polygon *p){
  int i=0;
  for(i=0; i<(p->side)-1;i++){
    p->perimeter=(p->perimeter)+find_distance(p->p[i],p->p[i+1]);
  }
  p->perimeter=(p->perimeter)+find_distance(p->p[i],p->p[0]);
}
void output(polygon p){
  printf("the primeter of polygon is %f",p.perimeter);
}