#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char myString[100]; // Adjust the size as needed
    printf("Enter a string: ");
    scanf("%[^\n]", myString);

    reverseString(myString);
    printf("Reversed string: %s\n", myString);

    return 0;
}
