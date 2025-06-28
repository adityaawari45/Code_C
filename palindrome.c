#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char* check_palindrome(char name[], int total_characters) {
    for (int i = 0; i < total_characters / 2; i++) {
        char temp = name[i];
        name[i] = name[total_characters - 1- i];
        name[total_characters - 1 - i] = temp;
    }
    return name;
}

int main() {
    char name[26] = "Anita";
    int len = strlen(name);
    char a[26];
    strcpy(a, name);
    check_palindrome(name, len);
    if (strcmp(a, name) == 0) {
        printf("The string '%s' is a palindrome.\n", a);
        return 0;
    } else {
        printf("The string '%s' is not a palindrome.\n", a);
        
        return 1;
    }
}
