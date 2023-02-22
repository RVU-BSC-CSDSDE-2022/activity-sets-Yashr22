#include<stdio.h>

void input_string(char *a);
int count_word(char *string);
void output(char *string, int no_string);

int main(){
  char a[100],string[100];
  int no_string;
  input_string(a);
  no_string=count_word(string);
  output(string,no_string);
}
void input_string(char *a){
  printf("Enter the string :");
  scanf("%s",a);
}
int count_word(char *string){
  int count=0;
  for(int i=0; string[i]!='\0'; i++){
    if(string[i]==' ' || string[i]=='\n' || string[i]=='\t'){
      count++;
    }
  }
  return count;
}
void output(char *string, int no_string){
  printf("The number of words in '%s' is %d",string,no_string);
}