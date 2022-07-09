#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    if(argc != 15) {
        printf("Invalid argument count: %d\n", argc);
        return 1;
    }

    int winning_row[7];
    int lotto_row[7];
    int matches_row[7];
    int i = 0;
    int j = 0;
    int k = 0;
    int lotto_row_index_start = 8;

    printf("Voittorivi: ");
    for(i = 0; i < 7; i++) {
        winning_row[i] = atoi(argv[i+1]);
        printf("%d ", winning_row[i]);
    }

    printf("\nLottorivi: ");
    for(i = 0; i < 7; i++) {
        lotto_row[i] = atoi(argv[lotto_row_index_start]);
        for(j = 0; j < 7; j++) {
            if(lotto_row[i] == winning_row[j]) {
                matches_row[k] = winning_row[j];
                k++;
            }
        }
        printf("%d ", lotto_row[i]);
        lotto_row_index_start++;
    }

    if(k == 0) {
        printf("\nEi yhtään oikein!");
    } else {
        printf("\n%d oikein: ", k);
        for(i = 0; i < k; i++) {
            printf("%d ", matches_row[i]);
        }
    }

    printf("\n");

    
    return 0;
}