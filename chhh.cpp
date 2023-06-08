#include <cstdio>
#include <cstdlib>

void reverse_input() {
    char c;
    char* buffer = (char*) malloc(sizeof(char));
    int size = 0;

    while ((c = getchar()) != ' ' && c != '\n') {
        buffer[size] = c;
        size++;
        buffer = (char*) realloc(buffer, sizeof(char) * (size + 1));
    }

    for (int i = size - 1; i >= 0; i--) {
        putchar(buffer[i]);
    }

    free(buffer);
}

int main() {
    reverse_input();
    return 0;
}
