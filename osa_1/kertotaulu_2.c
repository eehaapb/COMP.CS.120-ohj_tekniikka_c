#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {

    unsigned int a = atoi(argv[1]);
    unsigned int b = atoi(argv[2]);
    unsigned int c = atoi(argv[3]);
    unsigned int d = atoi(argv[4]);
    int i;
    int j;
    int z = b*d;
    int x = 1;

    while(z > 0) {
        z = z / 10;
        x++;
    }

    for(i = a; i <= b; i++) {
        if(i == a) {
            printf("%*s ", x, " ");
        }
        printf("%*d ", x, i);
    }
    printf("\n");

    for(j = c; j <= d; j++) {
        printf("%*d ", x, +j);  
        for(i = a; i <= b; i++) {
            printf("%*d ", x, i*j);
        }
        printf("\n");
    }

    return 0;
}