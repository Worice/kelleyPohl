/* Array frastagliati e arrya bidimensionali */

#include<stdio.h>

int main(int argc, char *argv[]){
	char a[2][15] = {"Tutto è", "meraviglioso"};
	char *p[2] = {"Tutto è", "meraviglioso"};

	int i, j;

	for(i = 0; i < 2; ++i){
		printf("\n");
		for(j = 0; j < 15; ++j)
			printf("%5d", a[i][j]);
	}
	printf("\n");

	for(i = 0; i < 2; ++i){
		printf("\n");
		printf("%s", p[i]);
	}
	printf("\n");

	return 0;
}	
