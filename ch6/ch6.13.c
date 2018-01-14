/* Pratica dalla teoria */
/* 6.13 */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXWORD 50
#define N 300
void too_much_words(void);
void word_too_long(void);
void swapp(char **, char **);
void sort(char **, int n);

int main(){
	char word[MAXWORD];
	char *w[N];
	int n;
	int i;

	for(i = 0; (scanf("%s", word) == 1); i++){
		if(i >= N)
			too_much_words();
		if(strlen(word) >= MAXWORD)
			word_too_long();
		w[i] = calloc(strlen(word) + 1, sizeof(char));
				
		strcpy(w[i], word);

		printf("%s\n", w[i]);
	}
	n = i;
	sort(w, n);
	for(i = 0; i < n; i++)
		printf("%s\n", w[i]);

	
	return 0;
}

/************ FUNZIONI AUSILIARIE ***************/

void too_much_words(){
	printf("\nThe input file contains too many words!\n");
	exit(1);
}

void word_too_long(){
	printf("\nThere is a word to large to be processed.\n");
	exit(1);
}

void swapp(char **p1, char **p2){
	char *temp = *p1;
	 *p1 = *p2;
	 *p2 = temp;
}	 		

void sort(char **pp, int n){
	int i, j;
	for(i = 0; i < n; ++i)
		for(j = i + 1; j < n; ++j)
			if(strcmp(pp[i], pp[j]) > 0)
				swapp(&pp[i], &pp[j]);
}	










