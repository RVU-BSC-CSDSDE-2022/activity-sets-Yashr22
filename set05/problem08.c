#include<stdio.h>
#include<math.h>

typedef struct _camel{
float radius, height, length, weight;
}camel;

int input_array();
void input_detail(int n, camel c[n], float *truck_weight);
void find_camel_weight(int n, camel c[n]);
float compute_total_weight(int n,camel c[n],float truck_weight);
void output(float total_weight);

int main(){
  int n;
  float total_weight,truck_weight;
  n=input_array();
  camel c[n];
  input_detail(n,c,&truck_weight);
  find_camel_weight(n, c);
  total_weight=compute_total_weight(n,c,truck_weight);
  output(total_weight);
}
int input_array(){
  int n;
  printf("Enter the size array :");
  scanf("%d",&n);
  return n;
}
void input_detail(int n, camel c[n], float *truck_weight){
  for(int i=0; i<n; i++){
    int camel_no=i+1;
    printf("Enter radius of camel number %d :",camel_no);
    scanf("%f",&c[i].radius);
    printf("Enter height of camel number %d :",camel_no);
    scanf("%f",&c[i].height);
    printf("Enter length of camel number %d :",camel_no);
    scanf("%f",&c[i].length);
  }
  printf("Enter the weight of truck :");
  scanf("%f",truck_weight);
}
void find_camel_weight(int n, camel c[n]){
  for(int i=0; i<n; i++){
    c[i].weight=3.14*(c[i].radius*c[i].radius*c[i].radius)*sqrt(c[i].height*c[i].length);
  }
}
float compute_total_weight(int n, camel c[n], float truck_weight){
  float total,camel_weight;
  camel_weight=0.0;
  for(int i=0; i<n; i++){
    camel_weight=camel_weight+c[i].weight;
  }
  total=camel_weight+truck_weight;
  return total;
}
void output(float total_weight){
  printf("The Total weight of the truck is: %f",total_weight);
}