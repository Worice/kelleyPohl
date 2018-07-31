/* Esercizio Tempesta 4.2 */

#include<stdio.h>
#include<stdlib.h>
int different(int *, int, int **);
/* MAIN */

int main(){
	int vect[] = {3, 4, 2, 3, 6, 7, 3, 4};
	int *ris;
	int sizeris, i;

	sizeris = different(vect, 8, &ris);

	for(i = 0; i < sizeris; i++)
		printf("\n %d ", ris[i]);

	free(ris);
	return 0;
}

/* AUX */

int different(int input[], int size, int **vetout){
	int *sup = (int *) malloc (sizeof(int) * size);
	int i, j;
	int unequal = 0;

	for(i = 0; i < size; i++)
		sup[i] = 1;

	for(i = 0; i < size; i++)
		if(sup[i] == 1){
			unequal++;
			for(j = i + 1; j < size; j++)
				if(input[i] == input[j])
					sup[j] = 0;
		}

	*vetout = (int*) malloc (sizeof(int) * unequal);

	j = 0;

	for(i = 0; i < size; i++){
		if(sup[i] == 1){
			(*vetout)[j] = input[i];
			j++;
		}
	}
	free(sup);
	return unequal;
}








