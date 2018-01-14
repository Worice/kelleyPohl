/* Esercizi dalla teoria del capitolo 7 */

#include<stdio.h>
#include<limits.h>
void bit_print(int);
int pack(char, char, char, char);
int unpack(int, int);
short concurrent(char, char, int, int);


int main(){
	int i, mask = 128;
	int packed_word;

	printf("\n7.2\tPrint number bits in a byte via for loop.\n");	/*Paragrafo 7.2*/

	for(i = 0; i < 8; ++i)
		printf("%d ", (112 & (mask >> i) ) ? 1 : 0);
	putchar('\n');
	
	printf("7.3\n");						/* Paragrafo 7.3*/	
	bit_print(133);

	printf("\n7.4\tLet's compact and unpack data in a word.\n");		/*Paragrafo 7.4*/
	
	packed_word = pack('a', 'b', 'c', 'd');
	bit_print(packed_word);
	bit_print(unpack(packed_word, 0));
	bit_print(unpack(packed_word, 1));
	bit_print(unpack(packed_word, 2));
	bit_print(unpack(packed_word, 3));

	printf("\nPack concurrent info in a short word: gender, army init, victories (max 15)\n"
		"and losses (max 7)\n");
	bit_print(concurrent('m', 118, 9, 3));

	printf("\n7.5\tNow let's work a little with enumerative types.\n");

	enum troops {core, special, rare, hero} t1;
	enum troops t2, t3;
	t1 = hero;
	typedef enum troops troops;
	t2 = core; t3 = rare;
	troops t4 = rare;
	printf("%s\n", (t2 == t1)? "yes" : "no");



	return 0;
}

/**** AUX ****/

void bit_print(int a){
	int i;
	printf("Let's print %d via bit_print() function.\n", a);
	int n = sizeof(int) * CHAR_BIT;	
	int mask = 1 << (n - 1);

	for(i = 1; i <= n; ++i){
		putchar(((a & mask) == 0) ? '0' : '1');
		a <<= 1;
		if(i % CHAR_BIT == 0 && i < n)
			putchar(' ');
	}
	putchar('\n');
}

int pack(char a, char b, char c, char d){
	int p = a;
	p = (p << CHAR_BIT) | b;
	p = (p << CHAR_BIT) | c;
	p = (p << CHAR_BIT) | d;
	return p;
}

int unpack(int p, int k){
	int n = k * CHAR_BIT;
	unsigned mask = 255;

	mask <<= n;
	return((p & mask) >> n);
}


short concurrent(char gender, char army, int victories, int losses){
	short dude = 0;

	dude |= (gender == 'M' || gender == 'm') ? 1 : 0;
	dude |= army << 1;
	dude |= victories << 9;
	dude |= losses << 13;

	return dude;
}
	       













