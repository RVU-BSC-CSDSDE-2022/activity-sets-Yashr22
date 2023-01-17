#include<stdio.h>

struct _triangle{
float base, altitde, height;
};
typedef struct _triangle triangle;

int input_n();
triangle input_triangle();
void input_n_triangle(int n, triangle t[n]);
int find_area(triangle *t);
void find_n_areas(int n, triangle t[n]);
triangle find_smallest_triangle(int n, triangle t[n]);
void output(int n, triangle t[n], triangle smallest);

int main(){
  
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
  scanf("%d",&t.base);
  printf("Enter the height of triangle :");
  scanf("%d",&t.height);
  return t;
}

void input_n_triangle(int n, triangle t[n]){
  for(int i=0; i<n; i++){
    t[i]=input_triangle();
  }
}