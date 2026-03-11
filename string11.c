#include<stdio.h>
#include<ctype.h>
int main(){
    char str[300];
    int i,count=0;
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        if(isdigit(str[i])){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}