#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int i = 1;
    
    for(i; i <= 100; i++) {
        if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
            printf("%d ", i);
        }

    }
    printf("\n");
    return 0;
}