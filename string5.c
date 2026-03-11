#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j, palindrome = 1;
    fgets(str, sizeof(str), stdin);
    j = strlen(str) - 2;
    for(i = 0; i < j; i++) {
        if(str[i] == ' ') {
            continue;
        }
        if(str[j] == ' ') {
            j--;
            i--;
            continue;
        }
        if(str[i] != str[j]) { 
            palindrome = 0;
            break;
        }
        j--;
    }

    if(palindrome) {
        printf("Palindrome");
    }
    else {
        printf("Not Palindrome");
    }

    return 0;
}