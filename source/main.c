//passwordGenerator.c
//programma che genera password random da 6 a 15 caratteri

#include "proto.h"
#include <stdio.h>


int main()
{
    char password[15];
    int lunghezza;
    int menu;

    do
    {
        printf("\n");
        printf("[1] Genera password. \n[0] Esci. \nScegli l'opzione: ");
        scanf("%d", &menu);
        if (menu)
        {
            if (menu == 1)
            {
                lunghezza = lunghezzaPassword();
                printf("\n");
                for (int i = 0; i<lunghezza; i++)
                {
                    password[i] = randomCharGenerator(i);
                    printf("%c", password[i]);
                }
                printf("\n");
            }
            else
            {
                printf("Comando non valido \n\n");
            }
        }
    } while (menu != 0);
   
}