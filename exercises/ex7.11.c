/* Exercise 7.11 */

#include <stdio.h>
#include <stdlib.h>

#define DIM 5

typedef int data;

typedef struct elem{
	data		info;
	struct elem	*next;
} ELEM;

typedef ELEM *LINK;

LINK array_to_list(int *, int);
void print_list(LINK);
void zeroes(LINK);


/* MAIN */

int main(){
	int a[DIM] = {-1, 2, -3, -4, -5};
	LINK ls;
	ls = array_to_list(a, DIM);
	print_list(ls);
	zeroes(ls);
	print_list(ls);


	return 0;
}

/* AUX */

LINK array_to_list(int a[], int rec){
	if(!rec)
		return NULL;
	else{
		LINK h;
		h = malloc(sizeof(ELEM));
		h -> info = a[0];
		h -> next = array_to_list(a + 1, --rec);
		return h;
	}
}

void print_list(LINK h){
	if(!h)
		printf("NULL\n");
	else{
		printf("%d --> ", h -> info);
		print_list(h -> next);
	}
}


void zeroes(LINK h){
	if(h){
		zeroes(h -> next);
			if((!(h -> next) || h -> next -> info == 0) && h -> info < 0)  					h -> info = 0;
	}
}
			
		















