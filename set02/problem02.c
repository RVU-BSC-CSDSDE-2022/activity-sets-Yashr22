/*#include <stdio.h>

void scalene(int side1,int side2,int side3);

int main()
{
  int side1,side2,side3;
  printf("Enter the side :");
  scanf("%d%d%d",&side1,&side2,&side3);
  

  scalene(side1,side2,side3);
}

void scalene(int side1,int side2,int side3){
  if (side1==side2 || side2==side3 || side3==side1){
    printf("The given triangle is not scalene :(");
    }
  else{
    printf("The given triangle is  scalen :)");
  }
}*/

#include<stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
  int a,b,c,isscalene;
  a=input();
  b=input();
  c=input();
  check_scalene(a,b,c);
  output(a,b,c,isscalene);
}

int input_side(){
  int x;
  printf("Enter the sides :");
  scanf("%d",&x);
  return 0;
}

int check_scalene(int a, int b, int c){
  if (a==b || b==c || c==a){
    return 1;
  }
  else{
    return 2;
  }
}

void output(int a, int b, int c, int isscalene)
{
  if(isscalene == 1){
    printf("The triangle with side %d %d and %d is not scalene",a,b,c);
  }
  else if(isscalene == 2){
    printf("The triangle of side %d %d and %d is scalene",a,b,c);
  }
}
