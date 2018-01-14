/* Esercizio 6.21 */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<assert.h>

int pal(char *);
int word_count(char *);
int word_len(char *, int);
int single_word_len(char *);
int pal_evo(char *, int);
char up_to_low(char);
int wspace = 0;

/************	MAIN	***********/

int main(int argc, char *argv[]){
	
	FILE *pToFile = fopen(argv[1], "r");
	char single;
	char w[10000];
	char *s;	/*area di lavoro*/
	int i  = 0; 
	int j = 0;
	static int z = 0;

	while((single = fgetc(pToFile)) != EOF){
		w[i++] = up_to_low(single);
		wspace += isspace(w[i]);
	}

	*(w + i + 1) = '\0';   
	
	int input_len = strlen(w);

	printf("Nel file abbiamo = %s", &w[0]);		
	printf("ovvero %d parole. In totale sono %d caratteri\n", word_count(w), input_len);
	printf("\nSe togliamo gli spazi otteniamo:\n\n");

	s = malloc((input_len - wspace) * sizeof(char));/* alloca spazio di lavoro per stringa */
	assert(s != NULL);				/* verifica allocamento */
	while(*(w + j)){				/* trasferisci parola in area di lavoro*/
		if(isspace(*(w + j))){
			++j;
			wspace += 1;
		}
		else{
			*(s + z) = *(w + j);
			++j; ++z;
		}	
	}


	*(s + z) = '\0';

	printf("%s, di lunghezza %d\n ", s, (int)(strlen(s)));
	printf("\ngli spazi bianchi erano %d.\n", wspace);

	printf("La parola risultante%s palindroma.\n\n", pal(s)? " è": " non è");	
	free(s);
	return 0;
}

/************	AUX	***********/

int pal(char *a){			/*Controlla se stringa è palindroma*/
	int min = 0;
	int max = strlen(a) - 1;
	
	while(max > min){
		if(a[min++] != a[max--])
			return 0;
		else
			return 1;
	}
}

int pal_evo(char *a, int max){		/* Controlla se palindroma, adattata a dimensione */
	int min = 0;			/* spaizo di lavoro */
	while(max > min){
		if(a[min++] != a[max--])
			return 0;
		else
			return 1;
	}
}


int word_count(char *s){		/* Conta singole parole in input */
	int count = 0;
	while(*s != '\0'){

		while(isspace(*s))
			++s;
		if(*s != '\0'){
			count++;
			while(!isspace(*s) && *s != '\0'){
				++s; 
			}
		}
	}
	return count;
}

int word_len(char *s, int dim){		/* Riporta lunghezza parola di qualsiasi stringa */
	if(*s != '\0'){
		while(isspace(*s))
			++s;
		if(*s != '\0'){
			while(!isspace(*s) && *s != '\0'){
				++s; ++dim;
			}
		return dim;
		}
		word_len(s, 0);
	}
	else
		return 0;
}

int single_word_len(char *s){		/* Lunghezza singola parola all'interno di una stringa */
	int dim = 0;
	while(*s != ' ' && *s != '\0'){
		while(isspace(*s))
			++s;
		if(*s != '\0'){
			if(!isspace(*s) && *s != ' '){
				++s; dim++;
			}
		}
	}
	return dim;
}	
  

char up_to_low(char c){			/*Converte maiuscole in minuscole */
	if(c >= 65 && c <= 97)
		return c += 32; 
	else
		return c;
}

	





