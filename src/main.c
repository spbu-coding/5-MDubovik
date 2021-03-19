#include <stdio.h>

int main() {
    printf("%p\n", other);
    fflush(stdout);
    input();

    return 0;
}

void input() {
    char buffer[10];
    gets(buffer);
}

void other() {
    printf("there is a hack attack");
    fflush(stdout);
    exit(0);
}