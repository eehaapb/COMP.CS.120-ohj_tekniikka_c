#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    unsigned int x = atoi(argv[1]);
    int i = 2;

    for(i; i < argc; i++) {
        printf("sqrt(%.*f) = %.*f\n", x, atof(argv[i]), x, sqrt(atof(argv[i])));
    }

    return 0;
}