/* Paragrafo 6.14 - Parametri di mani() */

#include<stdio.h>
void rev_print(char **, int);


int main(int argc, char *argv[]){
	printf("Parametri - argc = %d\n", argc);
	
	int i;

	printf("%s\n\n", argv[0]);

	for(i = 1; i < argc; i++)
		printf("%s\n", argv[i]);

	printf("\n");

	rev_print(argv, argc);

	return 0;
}


/* ************ AUSILIARIE ****************/

void rev_print(char **p, int n){
	if(n > 1)
		rev_print(p + 1, n - 1);
	printf("%s\n", *p);
}

