#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    unsigned int a = atoi(argv[1]);
    unsigned int b = atoi(argv[2]);
    int frst_prnt = 0;
    int flag = 0;

    if(a == b) {
        return 1;
    }

    for(a; a <= b; a++){
        int count = 0;
        unsigned int index = 3;
        for(index; index < argc; index++) {
            if(a % atoi(argv[index]) != 0) {
                count++;
            }
        }
        if(count == argc - 3) {
            frst_prnt != 0 ? printf(" %d", a) : printf("%d", a);
            frst_prnt = 1;
            flag = 1;
        }
    }

    flag != 0 ? printf("\n") : 0;

    return 0;
}