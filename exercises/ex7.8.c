/* Exercise 7.8 */

#include <stdio.h>
#include <stdlib.h>
#define DIM	5

typedef int	data;

typedef struct elem{
	data		info;
	struct elem	*next;
}ELEM;

typedef ELEM *LINK;

typedef enum {false, true} boolean;

LINK array_to_list(int *, int);
void print_list(LINK);
void modify_list(LINK);

/* MAIN */

int main(){
	int a[DIM] = {1, 2, 3, 4, 5};
	LINK l = NULL;
	l = array_to_list(a, DIM);
	print_list(l);
	modify_list(l);
	print_list(l);

	return 0;
}

/* AUX */

LINK array_to_list(int a[DIM], int rec){
	if(!rec)
		return NULL;
	else{
		LINK h;
		h = malloc(sizeof(ELEM));
		h -> info = a[0];
		h -> next = array_to_list((a + 1), --rec);
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

void modify_list(LINK h){
	int acc = 0;
	LINK tmp = NULL;
	while(h){
		tmp = h;
		while(tmp){
			acc += tmp -> info;
			tmp = tmp -> next;
		}
		h -> info = acc;
		acc = 0;
		h = h -> next;
	}
}
















