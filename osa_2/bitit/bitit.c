#include "bitit.h"
#include <stdio.h>
#include <limits.h>


void scharBitit(signed char x) {
    int i;
    int count0 = 0, count1 = 0;
    printf("%d\n",x);

    for(i = 1; i <= CHAR_BIT; i++) {
        char c = (x >> CHAR_BIT - i) & 1;
        if(c == 1) count1++;
        else {
            count0++;
        }
        printf("%d", c);
    }
    printf("\n");
    printf("%d\n", count0);
    printf("%d\n", count1);
    printf("\n");
}

void shortBitit(short int x) {
    int i;
    int count0 = 0, count1 = 0;
    printf("%d\n",x);

    for(i = 1; i <= CHAR_BIT*sizeof(x); i++) {
        char c = (x >> CHAR_BIT*sizeof(x) - i) & 1;
        if(c == 1) count1++;
        else {
            count0++;
        }
        printf("%d", c);
    }
    printf("\n");
    printf("%d\n", count0);
    printf("%d\n", count1);
    printf("\n");
}

void intBitit(int x) {
    int i;
    int count0 = 0, count1 = 0;
    printf("%d\n",x);

    for(i = 1; i <= CHAR_BIT*sizeof(x); i++) {
        char c = (x >> CHAR_BIT*sizeof(x) - i) & 1;
        if(c == 1) count1++;
        else {
            count0++;
        }
        printf("%d", c);
    }
    printf("\n");
    printf("%d\n", count0);
    printf("%d\n", count1);
    printf("\n");
}

void longBitit(long int x) {
    int i;
    int count0 = 0, count1 = 0;
    printf("%ld\n",x);

    for(i = 1; i <= CHAR_BIT*sizeof(x); i++) {
        char c = (x >> CHAR_BIT*sizeof(x) - i) & 1;
        if(c == 1) count1++;
        else {
            count0++;
        }
        printf("%d", c);
    }
    printf("\n");
    printf("%d\n", count0);
    printf("%d\n", count1);
    printf("\n");
}

int main(void) {
    scharBitit((signed char)-1000);
    shortBitit((short int)-1000);
    intBitit((int)-1000);
    longBitit((long int)-1000);

    return 0;
}