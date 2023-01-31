#include<stdio.h>

void input_string(char *a, char *b);
int sub_str_index(char *string, char *substring);
void output(char *string, char *substring, char index);

int main(){
  char *a[100],*b[100],*string[100],*substring[100],index;
  input_string(&a, &b);
  index=sub_str_index(&string, &substring);
  output(&string, &substring, index);
}

void input_string(char *a, char *b){
  printf("Enter the first character :");
  scanf("%s",a);
  printf("Enter the second character :");
  scanf("%s",b);
}
int sub_str_index(char *string, char *substring){
  int index = -1;
  for(int i=0; string[i]!='\0'; i++){
    index = -1;
    for(int j=0; substring[j]!='\0'; j++){
      if(string[i+j]!= substring[j]){
        index= -1;
        break;
      }
      index = i;
    }
    if(index != -1){
      break;
    }
  }
  return index;
}
void output(char *string; char *substring, char index){
printf("The index of '%s' in '%s' is %s",substring,string,index);
}