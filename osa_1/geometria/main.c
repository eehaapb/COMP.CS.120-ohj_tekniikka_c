#include "geometria.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int i;
    printf("Piin arvo: %.19Lf\n", PII);

    for(i = 1; i < argc; i++) {
        double sade = atof(argv[i]);
        double tilavuus = pallonTilavuus(sade);
        double ala = ympyranAla(sade);

        printf("Säteen %.6f omaavan ympyrän ala ja pallon tilavuus: %.10f ja %.10f\n", sade, ala, tilavuus);
        printf("Säteen %.6f omaavan ympyrän piiri on %.10Lf\n", sade, 2*PII*sade);
    }

    return 0;
}