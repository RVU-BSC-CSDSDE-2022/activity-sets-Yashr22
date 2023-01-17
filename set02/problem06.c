#include<stdio.h>
#include<string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
  char *a[50];
  input_string(a);
  str_reverse(&str, &rev_str);
  output(&a, &reverse_a);
}

void input_string(char *a){
  char b;
  printf("Enter the string :");
  scanf("%s",&b);
  return b;
}

void str_reverse(char *str, char *rev_str){
  
}

void output(char *a, char *reverse_a){
  
}