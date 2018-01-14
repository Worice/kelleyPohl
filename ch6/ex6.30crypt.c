/* Esercizio 6.30 */

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	char al[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K','L','M','N', 'O', 'P',
		'Q', 'R', 'S', 'U', 'V', 'W', 'X', 'W', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g','h',
	       	'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 'u', 'v', 'w', 'x', 'y', 'z'};

	char la[52] = {'Z', 'Y', 'X', 'W', 'V', 'U', 'S', 'R', 'Q', 'P', 'O', 'N','M','L','K','J',
		'I', 'H', 'G', 'F', 'E', 'D', 'C', 'B', 'A', 'z', 'y', 'x', 'w', 'v', 'u', 's', 'r',
		'q','p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a'};
	
	FILE *inp = fopen(argv[1], "r");
	FILE *out = fopen(argv[2], "w");
	char c;

	while((c = fgetc(inp)) != EOF){
		if(isspace(c))
			fprintf(out, "%c", ' ');
		for(int i = 0; i < 52; ++i){
			if(c == al[i])
				fprintf(out, "%c", la[i]);}
	}
	fprintf(out, "%c", '\n');

	fclose(inp);
	fclose(out);

	return 0;
}



