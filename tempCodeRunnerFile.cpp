#include <stdio.h>
#include <string.h>
#include <unistd.h>

void reverseString(char* str) {
    size_t length = strlen(str);
    size_t i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[] = "Hello, World!";
    reverseString(str);

    write(STDOUT_FILENO, str, strlen(str));
    write(STDOUT_FILENO, "\n", 1);

    return 0;
}
