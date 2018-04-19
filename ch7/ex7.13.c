/* Random number generator */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int random_number(void);
enum kind {number = 0, odd, even};
typedef enum kind kind;

/* MAIN */

int main(){
	int gain = 10;		/*Cumulative gain*/
	kind game = -1;		
	int bet = 0;		/*Single bet*/
	int spec_num = 0;
	
	printf("\nDo you play even, odd or a number between 0 and 35?\n\n"
		"Specific number:\t0\n"
		"Generic odd:\t\t1\n"
		"Generic even:\t\t2\n\n");
	scanf("%d", &game);

	while(gain > 0){
		printf("\nHow much money do you bet? Now, you do have Â%d.\n",
			gain);
		scanf("%d", &bet);
		
		if(game == 0){
			printf("Which number do you want to play:\n");
			scanf("%d", &bet);
			if(spec_num == random_number()){
				printf("Woah!\n");
				gain += (bet * 35);
			}
			else{
				gain -= bet;	
				printf("Lost!\n");
			}
		}

		if(game == 1)
			if(random_number() % 2 != 0){
				gain += (bet * 2);
				printf("Woah!\n");
			}
			else{
				gain -= bet;
				printf("Lost!\n");
			}
		if(game == 2)
			if(random_number() % 2 == 0){
				gain += (bet * 2);
				printf("Woah!\n");
			}
			else{
				gain -= bet;
				printf("Lost!\n");
			}

		printf("\nYour fortune amount to %d dollars.\n", gain);
	}

	return 0;
}


/* AUX */

int random_number(){
	srand((unsigned) time(NULL));
	return (rand() % 35);
}

