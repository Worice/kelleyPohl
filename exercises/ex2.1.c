/* Exercise 2.1A 
 *
 * Read from stdin two integers, check for coprimes 
 */

#include<stdio.h>

typedef enum{false, true} boolean;

void presentation(void);
int get_input(void);
boolean is_coprime(int *, int*);

/* MAIN */

int main(){
	int n1, n2;
	presentation();
	n1 = get_input();
	presentation();
	n2 = get_input();
	printf("%d %s %d %s %s!\n",
		n1, "and", n2, ((is_coprime(&n1, &n2) == true) ? "are" : "are not"), "coprime");	

	return 0;
}

/* AUX */

void presentation(void){
	printf("Please type a positive integer:\n");
}

int get_input(void){
	int tm;
	do{
		scanf("%d", &tm);
		if(tm < 1)
			printf("I said positive!\n");
	}while(tm < 1);
	return tm;
}

boolean is_coprime(int *p1, int *p2){
	int i;
	boolean out = true;
	for(i = 2; i < (*p1 / 2); ++i)
		if(*p1 % i == 0)
			if(*p2 % i == 0)
				out = false;
	return out;
}

	















