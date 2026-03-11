#include<stdio.h>
#include<ctype.h>
int main() {
    char str[1000];
    int i, count = 0;
    printf("");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++){
        char ch = tolower(str[i]); 
        if((ch >= 'a' && ch <= 'z') && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            count++;
        }
    }

    printf("%d",count);
    return 0;
}