/*Esame 01 giugno 16 esercizio 3 */

#include<stdio.h>
#include<stdlib.h>
#define DIM1 5

typedef struct elem{
	int info;
	struct elem *next;
}ELEM;

typedef ELEM *LINK;

void print_list(LINK);
LINK enlist(int *, int, int);

/* MAIN */

int main(){
	int a1[DIM1] = {1, 5, 5, 7, 9};

	LINK l1 = enlist(a1, 0, DIM1);

	print_list(l1);

	void rimuovi(LINK *pl){
		if(*pl && (*pl) -> next){
			rimuovi(&((*pl) -> next));
			LINK *tail = &((*pl) -> next);
			if((*pl) -> next -> info != (*pl) -> info && !(*pl) -> next -> next){
				free(*tail);
				(*pl) -> next = NULL;
			}
		}
	}	
	
	rimuovi(&l1);
	print_list(l1);

	return 0;
}

/* AUX */

void print_list(LINK l){
	if(!l)
		printf("NULL\n");
	else{
		printf("%d -> ", l -> info);
		print_list(l -> next);
	}
}

LINK enlist(int *a, int start, int end){
	if(start == end)
		return NULL;
	else{
		LINK l = (LINK) malloc(sizeof(ELEM));
		l -> info = a[start];
		l -> next = enlist(a, ++start, end);
		return l;
	}
}
