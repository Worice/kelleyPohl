/* Examples from chapter 9 */

#include<stdio.h>
#include "ch9_card.h"
#include "ch9_class_info.h"
#include "ch9_complex.h"

void get_integer(card *);
/* MAIN */

int main(){
	/* Paragraph 9.1*/
	
	struct card{		//Declare struct card
		int pips;
		char suit;
	};
	
	struct card c1, c2;	//Declare cards



	c1.pips = 3;		//Tre 
	c1.suit = 's';
	
	printf("\nCard 1: %d\n", c1.pips);	
	printf("\nCard 1: %c\n", c1.suit);

	get_integer(&c1);
	printf("\nCard 1: %d\n", c1.pips);	
	printf("\nCard 1: %c\n", c1.suit);
	
	c2 = c1;

	typedef struct card card;

	card c3, c4, c5;

	typedef struct{
		int pips;
		char suit;
	} soldier;

	soldier s1, s2;
	
	/* Paragraph 9.2 includei ch9_class_info.h */
	printf("\nParagraph 9.2.\n");

	student tmp, class[CLASS_SIZE];
	tmp.grade = 'F';
	tmp.last_name = "Murino";
	tmp.student_id = 126240;

	int fail(student class[]){
		int i, cnt = 0;

		for(i = 0; i < CLASS_SIZE; ++i)
			cnt += class[i].grade == 'F';
		return cnt;	
	}
	
	void add(complex *a, complex *b, complex *c){
		 a -> re = b -> re + c -> re;
		 a -> im = b -> im + c -> im;
	}


	return 0;
}


/* AUX */


void get_integer(card *c){
	printf("Type a number:\n");
	scanf("%d", &(c -> pips));
}
