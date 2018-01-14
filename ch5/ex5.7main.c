/* Programma che chiama 1000 volte la funzione probablity contenuta in ex5.7.c. */

#include <stdio.h>
#include "ex5.7.h"

int main(){
	int i, j;
	for(i = 0; i < 1000; ++i){
		printf(" %2.5lf", probability());
		if(++j % 10 == 0)
			printf("\n");
	}
	printf("\n\n\tMean = %lf", mean());
	printf("\n\nSurprisingly, in my case both output produce the same mean, regardless\n"
		"of the amount of casual numbers.\n");

	return 0;
}
