#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void obroc(char *znaki, int licznik);

void obroc2(char *znaki, int licznik);

int main2() {


    char *znaki = NULL;
    char znak;
    int licznik = 0;

    while (1) {
        scanf("%c", &znak);

        if (znak == 'Z') {
            break;
        }

        znaki = (char *) realloc(znaki, (licznik + 1) * sizeof(char));

        *(znaki + licznik) = znak;
        licznik++;

    }

    puts(znaki);

    obroc(znaki, licznik);

    printf("ZNAKI\n");

    puts(znaki);

    obroc2(znaki, licznik);
    puts(znaki);
}


void obroc(char *znaki, int licznik) {

    char *temp = (char *) malloc(licznik);
//    char temp2[licznik];

    for (int x = 0; x < licznik; x++) {
        *(temp + x) = znaki[licznik - x - 1];
//        temp[x] = znaki[licznik - x - 1];
    }

    for (int x = 0; x < licznik; x++) {
        *(znaki + x) = temp[x];
//        znaki[x] = temp[x];
    }

    free(temp);
}

void obroc2(char *znaki, int licznik) {
    char temp;
    int x;

    for (x = 0; x < licznik / 2; x++) {
        temp = znaki[x];
        znaki[x] = znaki[licznik - x - 1];
        znaki[licznik - x - 1] = temp;
    }
}