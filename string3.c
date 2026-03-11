#include<stdio.h>
#include<string.h>
int main(){
    char email[50];
    int i=0;
    printf("");
    scanf("%s",&email);
    while(email[i]!='@'&&email[i]!='\0'){
        printf("%c",email[i]);
        i++;
    }
    return 0;
}