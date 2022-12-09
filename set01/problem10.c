/*#include<stdio.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char string1, char string2);
void output(char string1, char string2, int result);

int main()
{
  char string1[100], string2[];
  int result=0;
  sring1=input();
  strng2=input();
  result=stringcompare(string1,string2);
  output(string1,string2,result);
  
}

void input_two_strings(char string1, char string2){
  printf("Enter the string1 :");
  scnaf("%s",&string1);
  printf("Enter the string2 :");
  scanf("%s",&string2);
  return 0;
}

int stringcompare(char string1, char string2);{
  
  int result = 0, i=0;
  while(string1[i]='\0' && string2[i]='\0')
  {
    if(string1[i]=string2([i])
    {
      flag=1;
      break;
    }
  }
  if(flag==0){
    if(string1[i]=='\0' && string2[i]=='\0')
      return 0;
    if(string1[i]=='\0')
      return 1;
    if(string2[i]=='\0')
      return 2;
  }
  
}

void output(char string1, char string2, int result){
  if(result)
}*/



/*#include <stdio.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
   char string1[100], string2[100];
   int result=0;
   input_two_strings(string1, string2);
    result=stringcompare(string1, string2);
    output(string1, string2, result);
}
void input_two_strings(char *string1, char *string2)
{
    printf("Enter the first string\n");
    scanf("%s", string1);
   printf("Enter the second string\n");
   scanf("%s", string2);
}

int stringcompare(char *string1, char *string2)
{
   int result=0, i=0, flag=0;
   for(i=0; string1[i]!='\0' && string2[i]!='\0'; i++)
     {

         if(string1[i]!=string2[i])
         {
            flag=1;
            break;
         }
     }

if(flag==0)
{
    if(string1[i]=='\0' && string2[i]=='\0')
      return 0;
  if(string1[i]=='\0')
    return 1;
  if(string2[i]=='\0')
    return 2;
  }

if(flag==1)
{
     if(string1[i]>string2[i])
       return 1;
  else return 2;
}
  }

void output(char *string1, char *string2, int result)
{
  if(result==0)
    printf("The strings are  equal\n");
  if(result==1)
    printf("%s is greater\n", string1);
  if(result==2)
     printf("%s is greater\n", string2);
  
}*/



#include <stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main()
{
  char string1[20] , string2[20];
  input_two_strings(&string1, &string2);
}

void input_two_strings(char *string1, char *string2)
{ 
  printf("Enter the first string \n");
  scanf("%s", string1);
  printf("Enter the second string\n");
  scanf("%s", string2);
  stringcompare(string1,string2);  
}

int stringcompare(char *string1, char *string2)
{
  int var=0,i=0;
  while (string1[i] != '\0' && string2[i] != '\0')
    {
      
      if(string1[i] > string2[i])
      {
        var=1;
        break;
      }
      
      else if (string2[i] > string1[i])
      {
        var=-1;
        break;
      }
      i++;
    }
  
  if(var==1) 
  {printf("First string %s is greater than the second string %s\n",string1,string2);}
  else if(var==-1)
  {printf("Second string %s is greater than the first string %s\n",string2,string1);}
  return 0;
  int result = stringcompare(string1,string2);
  output(string1,string2,result);
}

void output(char *string1, char *string2, int result)
{
  printf("The output is %d",result);
}