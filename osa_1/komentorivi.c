#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    int i = 1;

    for(i; i < argc; i++) {
        printf("%d: %s (pituus: %ld)\n",i,argv[i],strlen(argv[i]));
    }


    return 0;
}