/* Esame 31 agosto 2017, esercizio 2*/

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
void print_list(LINK);
LINK divisori(int);
int list_len(LINK);

/* MAIN */


int main(){
	int a[DIM] = {0, 1};
	LINK l = enlist(a, 0, DIM);
	
	int b[DIM] = {1, 2};
	LINK m = enlist(b, 0, DIM);
	
	print_list(l);
	print_list(m);

	LINK n = divisori(53);
	
	print_list(n);
	printf("list len: %d\n", list_len(n));	
	/*printf("b: %d\n", (m, 3));*/	
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

void print_list(LINK l){
	if(!l)
		printf("NULL\n");
	else{
		printf("%d -> ", l -> info);
		print_list(l -> next);
	}
}

LINK divisori(int n){
	int i;
	
	ELEM e;
	e.next = NULL;
	
	LINK l = &e;

	for(i = 1; i <= n; ++i)
		if(n % i == 0){
			l -> next = (LINK) malloc(sizeof(ELEM));
			l = l -> next;
			l -> info = i;
			l -> next = NULL;
		}
	
	return e.next;
}

int list_len(LINK l){
	if(l)
		return 1 + list_len(l -> next);
	else
		return 0;
}









