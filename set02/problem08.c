#include<stdio.h>

struct _triangle{
float base, altitude, area;
};
typedef struct _triangle triangle;

int input_n();
triangle input_triangle();
void input_n_triangle(int n, triangle t[n]);
void find_area(triangle *t);
void find_n_areas(int n, triangle t[n]);
triangle find_smallest_triangle(int n, triangle t[n]);
void output(int n, triangle t[n], triangle smallest);

int main(){
  int n,area;
  n=input_n();
  triangle t[n],smallest;
  input_n_triangle(n,t);
  find_n_areas(n,t);
  smallest = find_smallest_triangle(n,t);
  output(n,t,smallest);
}

int input_n(){
  int n;
  printf("Enter the number :");
  scanf("%d",&n);
  return n;
}

triangle input_triangle(){
  triangle t;
  printf("Enter the base of triangle :");
  scanf("%f",&t.base);
  printf("Enter the height of triangle :");
  scanf("%f",&t.altitude);
  return t;
}

void input_n_triangle(int n, triangle t[n]){
  for(int i=0; i<n; i++){
    t[i]=input_triangle();
  }
}

void find_area(triangle *t){
  float area=0;
  t->area=((t->base)*(t->altitude)*0.5);
  return t->area;
}

void find_n_areas(int n, triangle t[n]){
  for(int i =0; i<n;i++){
    find_area(&t[i]);
  }
}
triangle find_smallest_triangle(int n, triangle t[n]){
  triangle smallest = t[0];
  for(int i=1;i<n;i++){
    if (t[i].area<smallest.area){
      smallest = t[i];
    }
  }
  return smallest;
}
void output(int n, triangle t[n], triangle smallest){
  int i;
  printf("The smallest triangle out of triangle with base and height ");
  for(i=0; i<n; i++){
    printf("(%.2f,%.2f)",t[i].base, t[i].altitude);
  }
  printf(" is the triangle having base %.2f, height %.2f and area %.2f",smallest.base,smallest.altitude,smallest.area);
}
  //The smallest triangle out of triangles with base and height (2,3) , (4,6) is the triangle having base 2.00, height 3.00 and area 3.00
  