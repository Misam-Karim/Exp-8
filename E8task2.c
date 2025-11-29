#include <stdio.h>
#include <string.h>
    /*Misam Karim
      UIN: 251P048
      Class: Computer Engineering
      Division: C */
int main() {
    char str[100];
    int length, palindrome;
    printf("Enter a string: ");
    gets(str);
    // Call the custom function
    length = strlen(str);
    int start = 0;
    int end = length - 1;
    while (start < end) {
        if (str[start] != str[end]) {
        palindrome = 0;
        break;
        }
        start++;
        end--;
    }
    if (palindrome == 1) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is NOT a palindrome.\n", str);
    }
    return 0;
}
