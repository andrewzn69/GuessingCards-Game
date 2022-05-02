/***************************************************************
 *
 *   Program: Pexeso
 *
 *   Autor: Ondrej Zeman, IT1B
 *
 *   Description: Uzivatel si vybere kartu, ke ktere hleda
 *                dvojici
 *
 ***************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define p printf

// Horni strana karet
#define horni_strana printf("%c%c%c %c%c%c %c%c%c %c%c%c\n", 218, 196, 191, 218, 196, 191, 218, 196, 191, 218, 196, 191)
// Spodni strana karet
#define spodni_strana printf("%c%c%c %c%c%c %c%c%c %c%c%c\n\n", 192, 196, 217, 192, 196, 217, 192, 196, 217, 192, 196, 217)

int main()
{
    int input1, input2, tries, combinations = 4;

    // Kombinace: 1+7 2+6 3+5 4+8
    char card1 = '1', card2 = '2', card3 = '3', card4 = '4', card5 = '5', card6 = '6', card7 = '7', card8 = '8';

    do
    {
        system("cls");

        // 1. karta
        horni_strana;
        printf("%c%c%c %c%c%c %c%c%c %c%c%c\n", 179, card1, 179, 179, card2, 179, 179, card3, 179, 179, card4, 179);
        spodni_strana;

        horni_strana;
        printf("%c%c%c %c%c%c %c%c%c %c%c%c\n", 179, card5, 179, 179, card6, 179, 179, card7, 179, 179, card8, 179);
        spodni_strana;

        p("Vyber 1. kartu [0 pro EXIT]: ");
        scanf("%d", &input1);
        p("Vybral sis '");

        // Uzivatel zada 0
        if (input1 == 0)
            exit(0);

        // Uzivatelovi se ukaze, co si vybral
        switch (input1)
        {
        case 1:
            printf("*");
            break;
        case 2:
            printf("!");
            break;
        case 3:
            printf("/");
            break;
        case 4:
            printf("=");
            break;
        case 5:
            printf("/");
            break;
        case 6:
            printf("!");
            break;
        case 7:
            printf("*");
            break;
        case 8:
            printf("=");
            break;
        }
        p("', stiskni ENTER");
        getchar();
        getchar();

        system("cls");

        // 2. karta
        horni_strana;
        printf("%c%c%c %c%c%c %c%c%c %c%c%c\n", 179, card1, 179, 179, card2, 179, 179, card3, 179, 179, card4, 179);
        spodni_strana;

        horni_strana;
        printf("%c%c%c %c%c%c %c%c%c %c%c%c\n", 179, card5, 179, 179, card6, 179, 179, card7, 179, 179, card8, 179);
        spodni_strana;

        p("Vyber 2. kartu [0 pro EXIT]: ");
        scanf("%d", &input2);

        // Uzivatel zada 0
        if (input2 == 0)
            exit(0);

        p("Vybral sis '");

        // Uzivatelovi se ukaze, co si vybral
        switch (input2)
        {
        case 1:
            printf("*");
            break;
        case 2:
            printf("!");
            break;
        case 3:
            printf("/");
            break;
        case 4:
            printf("=");
            break;
        case 5:
            printf("/");
            break;
        case 6:
            printf("!");
            break;
        case 7:
            printf("*");
            break;
        case 8:
            printf("=");
            break;
        }
        p("', stiskni ENTER");
        getchar();
        getchar();
        tries++;

        if (input1 == 1 && input2 == 7 || input1 == 7 && input2 == 1)
        {
            card1 = ' ';
            card7 = ' ';
            combinations--;
        }
        if (input1 == 2 && input2 == 6 || input2 == 2 && input1 == 6)
        {
            card2 = ' ';
            card6 = ' ';
            combinations--;
        }
        if (input1 == 3 && input2 == 5 || input2 == 3 && input1 == 5)
        {
            card3 = ' ';
            card5 = ' ';
            combinations--;
        }
        if (input1 == 4 && input2 == 8 || input2 == 4 && input1 == 8)
        {
            card4 = ' ';
            card8 = ' ';
            combinations--;
        }

    } while (combinations != 0);

    system("cls");
    printf("Vyhral jsi!\n\n");
    p("Pokusu: %d", tries);
    getchar();
    getchar();
}