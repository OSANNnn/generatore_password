#include "proto.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char randomCharGenerator(int seed)
{
    srand(time(NULL)+seed);
    return (rand()%94)+33;
}

int lunghezzaPassword()
{
    int lunghezza;

    do
    {
        printf("Inserisci il numero di caratteri della tua password (min 6, max 15): ");
        scanf("%d", &lunghezza);

        if (lunghezza < 6 || lunghezza > 15)
        {
            printf("Valore non valido.\n\n");
        }
    }
    while(lunghezza < 6 || lunghezza > 15);

    return lunghezza;
}