/* Ex. 7.6
 * Given a numeric string, print a binary 4 bits representation of every digit of the string.
 */

#include<stdio.h>
#define DIM 32

void get_input(char *);
int len(char *);
void bit_print(char *, int);
char store[] = {'\0'};

/* MAIN */

int main(){
	get_input(store);
	printf("The input is %s", store);
	printf("It has lenght %d. In 4 bits binary blocks:\n", len(store));
	bit_print(store, len(store));
		printf("\n");
}

/* AUX */

void get_input(char *store){
	int i = 0;
	printf("Please type a numeric string:\n");
	while((*(store + (i++)) = getchar()) != '\n' && *(store + i) != EOF);  	
}

int len(char *p){
	int cnt = 0, i = 0;
	while(*(p + (++i)) != '\0')
		++cnt;
	return cnt;
}


void bit_print(char *p, int rec){
	char mask = 8;
	char i = 0;
	if(rec > 0){
		for(; i < 4; ++i){
			printf("%c", ((*p & mask) == 0) ? '0' : '1');
			mask >>= 1;
			}
		printf(" ");
		bit_print(p + 1, rec - 1);
		
		}
}

		
	








