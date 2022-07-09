#include <stdio.h>
#include <math.h>
#include <string.h>

int main(int argc, char** argv) {
    int i;
    int sum = 0;
    int length = strlen(argv[1]);
    int max_pow = length - 1;

    sum += argv[1][0] == '1' ? -(pow(2,max_pow)) : 0;
    max_pow--;

    for(i = 1; i < length; i++) {
        sum += argv[1][i] == '1' ? pow(2, max_pow) : 0;
        max_pow--;
    }

    printf("%d\n",sum);

    return 0;
}