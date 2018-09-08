/* Esame 08 giugno 2018, esercizio 3*/

#include<stdio.h>
#include<stdlib.h>
#define DIM 5 
typedef struct elem{
	int info;
	struct elem *next;
}elem;

typedef elem *link;

void print_list(link);
link enlist(int *, int, int);

/* MAIN */

int main(){
	int a[DIM] = {1, 2, 3, 2, 2};
	link l = enlist(a, 0, DIM);
	print_list(l);
	int rimuovi(link *l, int elem, int occor){
		if(!*l) 
			return 0;
		else{
			if((*l) -> info == elem && occor){
				link g = *l;
				*l = (*l) -> next;
				free(g);
				return 1 + rimuovi(&(*l), elem, --occor);
			}	
			else
				return rimuovi((&(*l) -> next), elem, occor);
		}
	}

	int rm = rimuovi(&l, 2, 3);

	print_list(l);	
	printf("rimossi: %d\n", rm);


	return 0;
}

/* AUX */

void print_list(link l){
	if(!l)
		printf("NULL\n");
	else{
		printf("%d -> ", l -> info);
	       	print_list(l -> next);
	}
}

link enlist(int a[DIM], int start, int end){
	if(start == end)
		return NULL;
	else{
		link l = malloc(sizeof(elem));
		l -> info = a[start];
		l -> next = enlist(a, ++start, end);
		return l;
	}
}
