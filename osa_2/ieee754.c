#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {

    double arvo_osa = 0;
    double weight = 0.5;
    double final, multiplier;
    int exponent = 0;
    char etumerkki;
    int i;
    int k = 7;

    for (i = 9; i < 32; i++) {
        arvo_osa += argv[1][i] == '1' ? weight : 0;
        weight = weight / 2;
    }
    arvo_osa += 1;
    printf("%.15f\n", arvo_osa);

    for (i = 1; i < 9; i++) {
        exponent += argv[1][i] == '1' ? pow(2, k) : 0;
        k--;
    }

    exponent -= 127;
    printf("%d\n", exponent);

    etumerkki = argv[1][0] == '0' ? '+' : '-';
    printf("%c\n", etumerkki);
    
    final = arvo_osa * (pow(2, exponent));
    etumerkki == '-' ? printf("%c%.15f\n",etumerkki, final) : printf("%.15f\n", final);




    return 0;
}