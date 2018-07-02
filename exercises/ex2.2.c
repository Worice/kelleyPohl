/* Exercise 2.2 
 *
 * read from stdin up to two equals 
 *
 */

#include<stdio.h>

/* MAIN */

int main(){
	int prec;
	int suc;
	printf("Please type an integer:\n");
	scanf("%d", &prec);
	do{
		printf("Please type another integer:\n");
		scanf("%d", &suc);
		if(suc == prec)
			printf("They are equals!\n");
		else{
			prec = suc;
			--suc;
		}
	}while(prec != suc);
	return 0;
}

	
