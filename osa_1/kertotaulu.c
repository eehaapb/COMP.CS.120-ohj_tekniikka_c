#include <stdio.h>

int main(int argc, char** argv) {
    int x = 1;
    int i = 1;
    
    printf("%4s", "x");

    for(x; x <= 15; x++) {
        printf("%4d", x);
    }
    printf("\n");

    for(i; i <= 15; i++) {
        int j = 1;
        printf("%4d", i);
        for(j; j <= 15; j++) {
            printf("%4d", i*j);
        }
        printf("\n");
    }

    return 0;

}