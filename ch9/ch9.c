/* Examples from chapter 9 */

#include<stdio.h>
#include "ch9_card.h"
#include "ch9_class_info.h"
#include "ch9_complex.h"

void get_integer(card *);
/* MAIN */

int main(){
	/* Paragraph 9.1*/
	printf("\nParagraph 9.1.\n");
	
	struct card{		//Declare struct card
		int pips;
		char suit;
	};
	
	struct card c1, c2;	//Declare cards
	typedef struct card card;



	c1.pips = 3;		//Tre 
	c1.suit = 's';
	
	void print_card(card c){
		printf("\nCard points: %d\n", c.pips);	
		printf("\nCard suits: %c\n", c.suit);
	}

	print_card(c1);

	get_integer(&c1);
	
	print_card(c1);

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

	/* Paragraph 9.3 value and address to functions */
	printf("\nParagraph 9.3.\n");

	card update_card(card c){
		char ch; int n;
		
		printf("\nChange card suit\n");
		scanf(" %c", &ch);
		c.suit = ch;
		
		printf("\bChange card pips:\n");
		scanf("%d", &n);
		c.pips = n;
		
		return c;
	}	

	c1 = update_card(c1);
	print_card(c1);	
	
	/* Paragraph 9.4 access structure by address */
	printf("\nParagraph 9.4.\n");

	soldier update_soldier(soldier *s){
		char ch; int n;
		
		printf("\nChange soldier suit\n");
		scanf(" %c", &ch);
		s -> suit = ch;
		
		printf("\bChange soldier pips:\n");
		scanf("%d", &n);
		s -> pips = n;
	}
	
	soldier print_soldier(soldier *s){
		printf("Soldier suit:\t%c\n", s -> suit);
		printf("Soldier pips:\t%d\n", s -> pips);
	}

	update_soldier(&s1);
	print_soldier(&s1);

	/* Paragraph 9.7 */
	printf("\nParagraph 9.7\n");

	typedef union int_or_float{
		int i;
		float f;
	}number;

	number n;
	n.i = 4444;
	printf("i: %10d	f: %16.10e\n", n.i, n.f);
	n.f = 4444.0;
	printf("i: %10d	f: %16.10e\n", n.i, n.f);
	
	return 0;
}



/* AUX */


void get_integer(card *c){
	printf("Type a number:\n");
	scanf("%d", &(c -> pips));
}
