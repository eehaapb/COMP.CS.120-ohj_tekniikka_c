#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    double min = atof(argv[1]);
    double max = atof(argv[1]);
    int i;
    int j;
    int print_once = 0;
    int max_count = 1;

    for(i = 1; i < argc; i++) {
        min = atof(argv[i]) < min ? atof(argv[i]) : min;
        max = atof(argv[i]) > max ? atof(argv[i]) : max;
    }

    printf("Pienin: %f\nSuurin: %f\n", min, max);

    for(i = 1; i < argc; i++) {
        int uniq_check = 0;
        double check_arg = atof(argv[i]);
        for(j = 1; j < argc; j++) {
            double compare = atof(argv[j]);
            if(j != i && check_arg == compare) {
                uniq_check++;
            }
        }

        if(uniq_check == 0) {
            if(print_once == 0) {
                printf("Ainutlaatuiset:");
                print_once++;
            }
            printf(" %f", check_arg);
        }
    }

    if(print_once != 0){
        printf("\n");
    }

    for(i = 1; i < argc; i++) {
        int present_check = 1;
        double check_arg = atof(argv[i]);
        for(j = 1; j < argc; j++) {
            double compare = atof(argv[j]);
            if(j != i && check_arg == compare) {
                present_check++;
            }
        }
        max_count = present_check > max_count ? present_check : max_count;
    }

    if(max_count != 1){
            printf("Useimmiten esiintyneet (%d kertaa):", max_count);
    }

    for(i = 1; i < argc; i++) {
        int present_check = 1;
        double check_arg = atof(argv[i]);
        for(j = 1; j < argc; j++) {
            double compare = atof(argv[j]);
            if(j != i && check_arg == compare) {
                present_check++;
            }
        }
        if(present_check == max_count && max_count != 1) {
            printf(" %f", atof(argv[i]));
            argv[i] = "\0";
        }
    }

    printf("\n");

    return 0;
}