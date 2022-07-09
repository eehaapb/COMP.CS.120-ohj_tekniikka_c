#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char** argv) {
    int flag = 0;
    int i, j, k;

    for(i = 1; i < argc; i++) {
       int length = strlen(argv[i]);
       k = length;
        for(j = 0; j < length; j++) {
            if(tolower(argv[i][j]) != tolower(argv[i][k-1])) {
                flag = 1;
            }
            k--;
        }
        flag == 0 ? printf("\"%s\": on palindromi\n", argv[i]) : printf("\"%s\": ei ole palindromi\n", argv[i]);
    }


    return 0;
}