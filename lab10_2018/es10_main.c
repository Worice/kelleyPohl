#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "es10.h"

/* Il valore di questa costante è tale per cui lo schermo possa contenere qualunque numero
 * intero positivo rappresentabile con 32 bit. Ovviamente potete modificarla per verificare
 * che la funzione `scrivi_cifra` non provochi overflow nella scrittura in schermi con meno
 * righe di quelle necessarie per rappresentare un numero. */
#define ALTEZZA_SCHERMO ((ALTEZZA+1)*10 - 1)

void stampa_schermo(char schermo[][LARGHEZZA]) {
    int r, c;

    /*
     * La stringa stampata dalla funzione `printf` è un 'ANSI escape code' che serve per pulire
     * il terminale e riposizionare il cursore in alto a sinistra. Per maggiori informazioni
     * consultate la seguente pagina di Wikipedia: https://en.wikipedia.org/wiki/ANSI_escape_code
     */
    printf("\033[2J\033[;H");
    for (c = 0; c < LARGHEZZA+2; c++) {
        printf("-");
    }
    printf("\n");
    for (r = 0; r < ALTEZZA_SCHERMO; r++) {
        printf("|");
        for (c = 0; c < LARGHEZZA; c++) {
            printf("%c", schermo[r][c]);
        }
        printf("|\n");
    }
    for (c = 0; c < LARGHEZZA+2; c++) {
        printf("-");
    }
    printf("\n");
}

/*
 * Compilare con il comando `gcc -std=gnu89 -Wall -pedantic -o es10 es10.c es10_main.c`.
 * Come sempre, siete liberi di modificare il file a vostro piacimento.
 */
int main() {
    	har schermo[ALTEZZA_SCHERMO][LARGHEZZA];
    	nt r, n;

    	do {
        	printf("Inserisci un numero non negativo: ");
        	scanf("%d", &n);
    	} while (n < 0);

	int cifre_cifre(int n){
		inf cifre = 0;
		do{
			n /= 10;
			cifre++;
		}while (n != 0);
		return cifre;
	}
	void pulisci_riga(char schermo[][LARGHEZZA], int riga){
		int c;
		for(c = 0; c < LARGHEZZA; c++){
			schermo[riga][c] = ' ';
		}
	}

    	void scrivi_cifra(char char schermo[][LARGHEZZA], int dim_schermo, int cifra, int riga){
		int r, c;

	   	if(cifra >= 0 && cifra <= 9){
			for(r = 0; r < ALTEZZA && r + riga < dim_schermo; r++){
				for(c = 0; c < LARGHEZZA; c++){
					schermo[r+riga][c] = font[cifra][r][c];
				}
			}
		}
	}
				

    scrivi_numero(schermo, ALTEZZA_SCHERMO, n);
    stampa_schermo(schermo);
    for (r = 0; r < ALTEZZA_SCHERMO; r++) {
        sleep(1);
        sposta_testo(schermo, ALTEZZA_SCHERMO, 1);
        stampa_schermo(schermo);
    }

    return EXIT_SUCCESS;
}
