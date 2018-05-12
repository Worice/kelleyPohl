/* Examples from chapter 9 */

#include<stdio.h>
#include "ch9_card.h"
#include "ch9_class_info.h"
#include "ch9_complex.h"

/* Stack constants */
#define MAX_LEN	1000
#define EMPTY	-1
#define FULL	(MAX_LEN - 1)

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

	/* Paragraph 9.8 */
	printf("\nParagraph 9.8\n");

	typedef struct{
		unsigned pips: 4;
		unsigned suit: 2;
	}pcard;

	pcard c;

	c.pips = 9;
	c.suit = 1;

	typedef struct{
		int a :1, b :16, c : 16;		/* 33 bits are on 2 words! */
	} abc;

	abc x;
	
	typedef struct{
		unsigned i1: 7, i2: 7, i3: 7,
			   : 11,			/* 11 filler bits */
			 i4: 7, i5: 7, i6: 7;
	} filled_double_word;


	/* Paragraph 9.9 */
	printf("\nParagraph 9.9\n");

	typedef struct{
		unsigned b0 : 8, b1 : 8, b2 : 8, b3 : 8;
	} word_bytes;
	
	typedef struct{
		unsigned
		b0 : 1, b1 : 1, b2 : 1, b3 : 1, b4 : 1, b5 : 1,
		b6 : 1, b7 : 1, b8 : 1, b9 : 1, b10: 1, b11: 1,
		b12: 1, b13: 1, b14: 1, b15: 1, b16: 1, b17: 1,
		b18: 1, b19: 1, b20: 1, b21: 1, b22: 1, b23: 1,
		b24: 1, b25: 1, b26: 1, b27: 1, b28: 1, b29: 1,
		b30: 1, b31;
	}word_bits;

	typedef union{
		int 	    i;
		word_bits   bit;
		word_bytes  byte;
	} word;

	word w = {0};
	
	void bit_print(int n, int rec){
		int mask = 1;
		mask <<= 31;
		if(rec <= 0)
			printf("\n");

		else{
			if(rec % 4 == 0)
				printf(" ");
			printf("%c", ((n & mask) == 0) ? '0' : '1');
			n <<= 1;
			bit_print(n, rec - 1);
		}
	}

	w.bit.b8 = 1;
	w.byte.b0 = 'a';
	printf("w.i = %d\n", w.i);
	bit_print(w.i, 32);
	bit_print(w.bit.b8, 32);
	bit_print(w.byte.b0, 32);

	/* Paragraph 9.10 */
	printf("\nParagraph 9.10\n");

	typedef struct{
		char s[MAX_LEN];
		int top;
	} stack;

	typedef enum boolean {true, false} boolean;
	
	void reset(stack *stk){
		stk -> top = EMPTY;
	}

	void push(char c, stack *stk){
		stk -> top++;
		stk -> s[stk -> top] = c;
	}

	char pop(stack *stk){
		return (stk -> s[stk -> top--]);
	}

	boolean empty(stack *stk){
		return (boolean) (stk -> top == EMPTY);
	}

	boolean full(stack *stk){
		return (boolean) (stk -> top == FULL);
	}

	char str[50] = "My name is Maurizio";
	printf("%s", str);
	stack stk;
	reset(&stk);

	printf("\nCopyng on the stack...\n");
	printf("\nPrinting from the stack..!\n");
	
	int j = 0;
	while(str[j] != '\0'){
		if(!full(&stk))
			push(str[j++], &stk);	
	}

	while(!empty(&stk)){
		printf("%c", pop(&stk));
	}
	printf("\n");

	return 0;

}
			

/* AUX */


void get_integer(card *c){
	printf("Type a number:\n");
	scanf("%d", &(c -> pips));
}
