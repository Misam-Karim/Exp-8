#include <stdio.h>
    /*Misam Karim
      UIN: 251P048
      Class: Computer Engineering
      Division: C */
int getStringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
int main() {
    char String[100];
    printf("Enter a string: ");
    gets(String);
    // Call the custom function
    int len = getStringLength(String);
    printf("The length of the string is: %d\n", len);
    return 0;
}
