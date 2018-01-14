/* Contiamo le parole in una stringa */

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<assert.h>

int word_count(char *);

int main(int argc, char *argv[]){
	
	FILE *input;
	char *w;
	static int i = 0;
	input = fopen(argv[1], "r");
	
	for(; (i == '\0'); i++)
		sscanf(input, "%c", (w + i));
	
	fclose(input);
	*(w + i + 1) = '\0';

	printf("\nWords:\t%d\n", word_count(w));
	return 0;
}

/* Ausiliarie */

int word_count(char *s){
	
	int count = 0;
	while(*s != '\0'){
		while(isspace(*s))
			++s;
		if(*s != '\0'){
			++count;
			while(!isspace(*s) && *s != '\0')
				++s;
		}
	}
	return count;
}
