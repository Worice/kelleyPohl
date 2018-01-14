/* Esercizio 6.20 */
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
int pals = 0;



/************	MAIN	***********/

int main(int argc, char *argv[]){
	
	FILE *pToFile = fopen(argv[1], "r");
	char single;
	char w[10000];
	char *s;	/*area di lavoro*/
	int i = 0, z = 0; 

	while((single = fgetc(pToFile)) != EOF)
		w[i++] = single;

	*(w + i + 1) = '\0';

	
	for(i = 0; *(w + i) != '\0'; ++i)
		printf("%c", *(w + i));

	printf("Nel file abbiamo = %s", &w[0]);		
	
	
	printf("ovvero %d parole.\n", word_count(w));
	
	
	i = 0;
	
	while(z < word_count(w)){	
		int len = single_word_len(w + i);	/* lunghezza di parola fino a spazio */
		s = calloc(len, sizeof(char));		/* alloca spazio di lavoro per parola*/
		assert(s != NULL);			/* verifica allocamento */
		for(int j = 0; j < len; ++j){		/* trasferisic parola in area di lavoro*/
			*(s + j) = *(w + j + i);
		}
		printf("%s, di lunghezza %d\n ", s, len);
		
		printf("palindroma? = %d\n", pal_evo(s, len - 1));	
		pals += pal_evo(s, len - 1); 		/* contatore/accumulatore palindrome */
	
		free(s);				/* libera memoria */
		++z;
		i += len;
		if(*(w + i) != '\0')
			++i;

	}
	
	printf("\nCi sono %d palindrome.\n", pals);

	return 0;
}

/************	AUX	***********/

int pal(char *a){
	int min = 0;
	int max = strlen(a) - 1;
	
	while(max > min){
		if(a[min++] != a[max--])
			return 0;
		else
			return 1;
	}
}

int pal_evo(char *a, int max){
	int min = 0;
	while(max > min){
		if(a[min++] != a[max--])
			return 0;
		else
			return 1;
	}
}


int word_count(char *s){
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

int word_len(char *s, int dim){
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
int single_word_len(char *s){
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






	





