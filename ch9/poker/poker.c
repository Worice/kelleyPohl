/* Program that simulate poker games */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NDEALS		3000	/* Numero di distribuzioni */
#define NPLAYERS	6	/* Number of players */

typedef enum{fiori, quadri, cuori, picche} fqcp;

typedef struct{
	int punti;
	fqcp seme;
} card;

card	assign_values(int punti, fqcp seme);
void	prn_card_values(card *c_ptr);
void	play_poker(card deck[52]);
void 	shuffle(card deck[52]);
void	swap(card *p, card *q);
void	deal_the_cards(card deck[52], card hand[NPLAYERS][5]);
int	is_flush(card h[5]);

/* MAIN */

int main(void){
	fqcp seme;
	int i, punti;
	card deck[52];

	for(i = 0; i < 52; ++i){
		punti = i % 13 + 1;
		if(i < 13)
			seme = fiori;
		else if(i < 26)
			seme = quadri;
		else if(i < 39)
			seme = cuori;
		else
			seme = picche;
		deck[i] = assign_values(punti, seme);
	}

	for(i = 26; i < 39; ++i)
		prn_card_values(&deck[i]);
	
	play_poker(deck);
	return 0;
}

/* AUX */

card assign_values(int punti, fqcp seme){
	card c;
	c.punti = punti;
	c.punti = seme;
	return c;
}


void prn_card_values(card *c_ptr){
	int 	punti = c_ptr -> punti;
	fqcp	seme = c_ptr -> seme;
	char 	*suit_name;

	if(seme == fiori)
		suit_name = "fiori";
	else if(seme == quadri)
		suit_name = "quadri";
	else if(seme == cuori)
		suit_name = "cuori";
	else if(seme = picche)
		suit_name = "picche";
	printf("card: %2d of %s\n", punti, suit_name);
}

void play_poker(card deck[52]){
	int flush_cnt = 0, hand_cnt = 0;
	int i, j;
	card hand[NPLAYERS][5];	/* 5 carte per giocatore*/

	srand(time(NULL));	/* inizializzare generatore*/

	for(i = 0; i < NDEALS; ++i){
		shuffle(deck);
		deal_the_cards(deck, hand);
		for(j = 0; j < NPLAYERS; ++j){
			++hand_cnt;
			if(is_flush(hand[j])){
				++flush_cnt;
				printf("%s%d\n%s%d\n%s%f\n\n",
				   "	 Hand number:     ", hand_cnt,
				   "   	 Flush number:    ", flush_cnt, 
				   "Flush probability:	  ", 
				   (double) flush_cnt / hand_cnt);
			}
		}
	}
}

void shuffle(card deck[52]){
	int i, j;

	for(i = 0; i < 52; ++i){
		j = rand() % 52;
		swap(&deck[i], &deck[j]);
	}
}

void swap(card *p, card *q){
	card tmp;
	tmp = *p;
	*p = *q;
	*q = tmp;
}

void deal_the_cards(card deck[52], card hand[NPLAYERS][5]){
	int card_cnt = 0, i, j;

		for(j = 0; j < 5; ++j)
			for(i = 0; i < NPLAYERS; ++i)
				hand[i][j] = deck[card_cnt++];
}

int is_flush(card h[5]){
	int i;
	for(i = 1; i < 5; ++i)
		if(h[i].seme != h[0].seme)
			return 0;
	return 1;
}












