#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    unsigned int a = atoi(argv[1]);
    unsigned int b = atoi(argv[2]);

    for(a; a <= b; a++){
        int count = 0;
        unsigned int index = 3;
        for(index; index < argc; index++) {
            if(a % atoi(argv[index]) != 0) {
                count++;
            }
        }
        if(count == argc - 3) {
            printf("%d ", a);
        }
    }

    return 0;
}