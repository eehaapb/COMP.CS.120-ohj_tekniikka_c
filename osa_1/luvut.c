#include <stdio.h>

const unsigned char PRINT_MAX = 100;

int main(int argc, char** argv) {
    long int loop_max = argv[1];

    int i = 0;
    for(i; i <= PRINT_MAX; i++) {
        if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
            printf("%d ", i);
        }

    }
    printf("\n");
    return 0;
}