/* Exercise 2 */

#include<stdio.h>

void get_input(short *, short *, short *);
short majority(short, short, short);
void input_text(short);
void bit_print(short);

/* MAIN */

int main(){
	unsigned short a = 0;
	unsigned short b = 0;
       	unsigned short c = 0;
/*	get_input(&a, &b, &c); */
	bit_print(1);
	return 0;
}

/* AUX */

void get_input(short *a, short *b, short *c){
	for(int i = 1; i <= 1; ++i){
		input_text(i);
		scanf("%hu", a);
		(*a) <<= 1;

		scanf("%hu", b);
		(*b) <<= 1;

		scanf("%hu", c);
		(*c) <<= 1;
	}
}
	

short majority(short a, short b, short c){
	int i;
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
}


















