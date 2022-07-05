#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char** argv) {
    if(argc != 3) {
        printf("Invalid argument count: %d\n", argc);
        return 1;
    }

    char a = atoi(argv[1]);
    char b = atoi(argv[2]);

    for(a; a <= b; a++) {
        printf("%d: %c\n",a, a);
        if(a == CHAR_MAX) {
            break;
        }
    }

    return 0;
}