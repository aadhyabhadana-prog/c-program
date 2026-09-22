#include <stdio.h>
#include <string.h>

void reverse_string(char *str) {
    int i = 0;
    int j = strlen(str) - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char text[] = "Hello World";
    reverse_string(text);
    printf("%s\n", text);
    return 0;
}
