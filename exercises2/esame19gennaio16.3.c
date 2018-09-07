/* Esame 19 gennaio 2016 esercizio 3 */

#include<stdlib.h>
#include<stdio.h>
#define DIM 5

typedef struct elem{
	int info;
	struct elem *next;
}ELEM;

typedef ELEM *LINK;

LINK enlist(int *, int, int);

void print_list(LINK);

/* MAIN */

int main(){
	int a[DIM] = {1, 2, -3, 4, 5};
	LINK l = enlist(a, 0, DIM);
	print_list(l);

	void zeroes(LINK l){
		if(l){
			zeroes(l -> next);
			if((!(l -> next) || l -> next -> info == 0) && l -> info < 0)
				l -> info = 0;
		}
	}

	zeroes(l);
	print_list(l);	


	return 0;
}

/* AUX */

LINK enlist(int *a, int start, int end){
	if(start == end)
		return 0;
	else{
		LINK h = (LINK) malloc(sizeof(ELEM));
		h -> info = a[start];
		h -> next = enlist(a, ++start, end);
		return h;
	}
}

void print_list(LINK l){
	if(!l)
		printf("NULL\n");
	else{
		printf("%d -> ", l -> info);
		print_list(l -> next);
	}
}








