#include<stdio.h>

void input(char *name);
int has_nice_name(char *c);
void output(int res);

int main(){
  char name[100];
  int res;
  input(name);
  res=has_nick_name(name);
  output(res);
}
void input(char *name){
  printf("Enter the name of camel :");
  scanf("%s",&*name);
}
int has_nice_name(char *c){
  int vowel,consonant,result,i;
  vowel=0;
  consonant=0;
  for(i=0; c[i]!='\0'; i++){
    if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u'){
      vowel++;
    }
    else{
      consonant++;
    }
    if(vowel>=2 && consonant>=2){
      result=0;
    }
    else{
      result=1;
    }
  }
  return result;
}
void output(int res){
  if(res==0){
    printf("Camel has a nickname");
  }
  else{
    printf("Camel doen't has a nickname");
  }
}