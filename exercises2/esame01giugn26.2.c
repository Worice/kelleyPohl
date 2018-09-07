/*Esame 01 giugno 16 esercizio 2 */

#include<stdio.h>
#include<stdlib.h>
#define DIM1 5
#define DIM2 5

typedef struct elem{
	int info;
	struct elem *next;
}ELEM;

typedef ELEM *LINK;

void print_list(LINK);
LINK enlist(int *, int, int);

/* MAIN */

int main(){
	int a1[DIM1] = {1, 3, 5, 7, 9};
	int a2[DIM2] = {2, 4, 6, 8, 10};

	LINK l1 = enlist(a1, 0, DIM1);
	LINK l2 = enlist(a2, 0, DIM2);

	print_list(l1);
	print_list(l2);

	LINK combine(LINK l1, LINK l2){
		if(!l1)
			return l2;
		else{
			l1 -> next = combine(l2, l1 -> next);
			return l1;
		}
	}

	LINK l3 = combine(l1, l2);
	print_list(l3);

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
