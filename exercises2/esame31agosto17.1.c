/* Esame 31 agosto 2017, esercizio 1*/

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
int trovasomma(LINK, int);
void print_list(LINK);
/* MAIN */

int main(){
	int a[DIM] = {0, 1};
	LINK l = enlist(a, 0, DIM);
	
	int b[DIM] = {1, 2};
	LINK m = enlist(b, 0, DIM);
	
	print_list(l);
	print_list(m);

	printf("a: %d\n", trovasomma(l, 3));	
	printf("b: %d\n", trovasomma(m, 3));	
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

int trovasomma(LINK l, int n){
	if(l){
		if(n - (l -> info) == 0)
			return 1;
		else
			trovasomma(l -> next, n - (l -> info));
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
