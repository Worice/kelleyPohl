/* Exercise 2 */

#include<stdio.h>

void bit_print(short);
void get_input(short *, short *, short *);
short majority(short *, short *, short *);
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
	majority(&a, &b, &c);

	bit_print(a);
	bit_print(b);
	bit_print(c);
	return 0;
}

/* AUX */

void get_input(short *a, short *b, short *c){
	int i = 1;
	short mask = 0, ina = 0, inb = 0, inc =0;
	for(; i <= 16; ++i){
		input_text(i);
		scanf("%hu", &ina);

		scanf("%hu", &inb);

		scanf("%hu", &inc);
		if(ina)
			*a += 1;
		if(inb)
			*b += 1;
		if(inc)
			*c += 1;
		if(i < 16){
			*a <<= 1;
			*b <<= 1;
			*c <<= 1;
		}
	}
}
	

short majority(short *a, short *b, short *c){
	int i = 0;
	unsigned short counta = 0, countb = 0, countc = 0, mask = 1;
	for(; i < 16; ++i){
		counta += (mask & *a) == 0;
		countb += (mask & *b) == 0;
		countc += (mask & *c) == 0;

		/*bit_print(mask); */
		mask <<= 1;
	}
	printf("\n\tno\tyes\n"
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


















