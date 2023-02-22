#include<stdio.h>

void input_string(char* a, char* b);
int sub_str_index(char *string, char *substring);
void output(char *string, char *substring, int index);

int main(){
  char a[100],b[100];
  int index;
  input_string(a, b);
  index=sub_str_index(a,b);
  output(a,b, index);
}

void input_string(char* a, char* b){
  printf("Enter the string :");
  scanf("%s",a);
  printf("Enter the substring :");
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
void output(char *string, char *substring, int index){
  printf("The index of '%s' in '%s' is %d",substring,string,index);
}