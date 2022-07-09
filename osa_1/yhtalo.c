#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);
    double x, x2, x3;
    int flag;

    if(pow(b, 2) - 4*a*c == 0) flag = 1;
    if(pow(b, 2) - 4*a*c < 0) flag = 0;
    if(pow(b, 2) - 4*a*c > 0) flag = 2;
    
    switch (flag) {
        case 0: {
            printf("Ei ratkaisua\n");
            break;
        }
        case 1: {
            x = -b/(2*a);
            printf("%.3f\n", x);
            break;
        }
        case 2: {
            x = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
            x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
            printf("%.3f %.3f\n", x2, x);
            break;
        }
    }

    return 0;
}