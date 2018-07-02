/* Exercise 6.2 */

#include<stdio.h>
#include<stdlib.h>
#define DIM 5

/* Prototypes */
typedef int	data;

typedef struct elem{
	data		info;
	struct elem	*next;
}ELEM;

typedef ELEM *LINK;

void print_list(LINK);
LINK array_list(int *, int);
LINK sum_list(LINK, LINK, int);

/* MAIN */
int main(){
	int a[DIM] = {1, 2, 3, 4, 5};
	int b[3] = {9, 2, 3};
	LINK ls1, ls2, ls3;
	ls1 = array_list(a, DIM);
	ls2 = array_list(b, 3);
	print_list(ls1);
	print_list(ls2);
	ls3 = sum_list(ls1, ls2, 0);
	print_list(ls3);
	return 0;
}

/* AUX */

LINK array_list(int a[DIM], int rec){
	if(!rec)
		return NULL;
	else{
		LINK h = malloc(sizeof(ELEM));
		h -> info = a[0];
		h -> next = array_list(a + 1, --rec);
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

LINK sum_list(LINK h1, LINK h2, int carry){
	if(!h1)
		return h2;
	else if(!h2)
		return h1;
	else{
		LINK h3 = malloc(sizeof(ELEM));
		h3 -> info = ((h1 -> info + h2 -> info) % 10) + carry;		

		carry = (h1 -> info + h2 -> info) / 10;
		h3 -> next = sum_list(h1 -> next, h2 -> next, carry);
		return h3;
	}
}

