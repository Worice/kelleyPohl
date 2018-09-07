/* Esercizio 1c esame 6 settembre 2016 */

#include<stdio.h>
#include<stdlib.h>
#define DIM 10 


struct cella{
	int info;
	struct cella *next;
};

typedef struct cella *tlist;

typedef struct cella ELEM;
typedef tlist LINK;

/* PROTOTYPES */

LINK enlist(int *, int, int);
int change(LINK);
int seq(LINK *, LINK *);
void comprimi(LINK, int **, int *);

/* MAIN */

int main(){
	int a[DIM] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	LINK l = enlist(a, 0, DIM);
	printf("changes: %d\n", change(l));
	int size;
	int *psize = &size;
	int *b;

	comprimi(l, &b, psize); 
	
	for(int i = 0; i < size; ++i)
		printf("| %d |", b[i]);
	printf("\n");
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


void comprimi(LINK l, int **out, int *outsize){
	*outsize = change(l);
	*out = (int *) malloc(*outsize * sizeof(int));
	int i;
	LINK *p = &l;
	for(i = 0; i < *outsize; ++i){
		
		if((*p) -> info == 1)
			(*out)[i] = 1 * (seq(p, p));
		else
			(*out)[i] = (-1) * (seq(p, p));
	}
}

int change(LINK l){
	if(!l -> next)
		return 1;
	else{
		if(l -> info != l -> next -> info)
			return 1 + change(l -> next);
		else
			return 0 + change(l -> next);
	}
}

int seq(LINK *l, LINK *p){
	if(!((*l) -> next))
		return 1;
	else{
		if((*l) -> info == (*l) -> next -> info)
			return 1 + seq(&(*l) -> next, NULL);
		else{
			*p = (*l) -> next;
			return 1;
		}
	}
}













