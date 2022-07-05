#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    if(argc != 15) {
        printf("Invalid argument count: %d\n", argc);
        return 1;
    }

    unsigned int winning_row[7];
    unsigned int test_row[7];
    unsigned int i = 0;
    unsigned int j = 0;

    for(i; i < argc; i++) {
         if(i > 7) {
            test_row[j] = atoi(argv[i+1]);
            j++;
            printf("%d",test_row[j]);
        } else {
            winning_row[i] = atoi(argv[i+1]);
            printf("%d",winning_row[i]);
        }

    }


    return 0;
}