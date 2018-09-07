/* Esercizio 2c esame 6 settembre 2016 */

#include<stdio.h>
#include<stdlib.h>
#define DIM 2 


struct cella{
	int info;
	struct cella *next;
};

typedef struct cella *tlist;

typedef struct cella ELEM;
typedef tlist LINK;

/* PROTOTYPES */

LINK enlist(int *, int, int);
int power(int, int);
unsigned int converti(LINK);
/* MAIN */

int main(){
	int a[DIM] = {0, 1};
	LINK l = enlist(a, 0, DIM);
	
	int b[DIM] = {1, 2};
	LINK m = enlist(b, 0, DIM);
	
	printf("a: %d\n", converti(l));
	printf("b: %d\n", converti(m));
	printf("power: %d\n", power(2, 4));
	return 0;
}

/* AUX */

LINK enlist(int *a, int start, int end){
        if(start == end)
       		return NULL;
	else{
	 	LINK h = malloc(sizeof(ELEM));
		h -> info = a[start];
		h -> next = enlist(a, ++start, end);
		return h;
	}
}


unsigned int converti(LINK l){
	if(l)
		return power(2, (1 + converti(l -> next)));
}


int power(int n, int p){
	if(p == 0)
		return 1;
	else if(p == 1)
		return n;
	else
		return n * power(n, p - 1);
}













