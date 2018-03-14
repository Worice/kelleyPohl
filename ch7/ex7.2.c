/* Exercise 2 */

#include<stdio.h>

void bit_print(short);
void get_input(short *, short *, short *);
short majority(short, short, short);
void input_text(short);
void bit_print(short);

/* MAIN */

int main(){
	unsigned short a = 0;
	unsigned short b = 0;
       	unsigned short c = 0;
	bit_print(a);
	bit_print(b);
	bit_print(c);

	get_input(&a, &b, &c); 
	majority(a, b, c);

	bit_print(a);
	bit_print(b);
	bit_print(c);
	return 0;
}

/* AUX */

void get_input(short *a, short *b, short *c){
	for(int i = 1; i <= 3; ++i){
		input_text(i);
		scanf("%hu", a);
		(*a) <<= 2;

		scanf("%hu", b);
		(*b) << 1;

		scanf("%hu", c);
		(*c) <<= 1;
	}
}
	

short majority(short a, short b, short c){
	int i = 0;
	short counta = 0, countb = 0, countc = 0;
	short mask = 1;
	mask <<= 15;
	for(; i < 16; ++i){
		counta += ((mask & a) == 1);
		countb += (mask & b);
		countc += (mask & c);

		a <<= 1; b <<=1; c <<= 1;
	}
	printf("\n\tyes\tno\n"
		"Alice\t%hu\t%hu\n"
		"Betty\t%hu\t%hu\n"
		"Carol\t%hu\t%hu\n", 
		counta, 16 - counta,
		countb, 16 - countb,
		countc, 16 - countc);
	return 0;
}

void input_text(short n){
	printf("\nHow Alice, Betty and Carol voted on the referendum number %d?", n);
}

void bit_print(short n){
	short mask = 1;
	mask <<= (16 - 1);
	for(short i = 0; i < 16; ++i){
		if(i % 4 == 0)
			printf(" ");
		printf("%c", ((mask & n) == 0) ? '0' : '1');
		n <<= 1;
	}
	printf("\n");
}


















