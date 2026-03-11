#include<stdio.h>
#include<string.h>
int main(){
    char str;
    scanf("%s",&str);
  if(str>='A'&&str<='Z')
      printf("valid");
      else
          printf("Invalid");
  return 0;
}