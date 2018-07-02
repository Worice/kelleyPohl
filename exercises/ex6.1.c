/* Exercise 6.1 */

#include<stdio.h>
#include<stdlib.h>
#define DIM 5


/* Typedef */
typedef int	data;

typedef struct elem{
	data		info;
	struct elem	*next;
}ELEM;

typedef ELEM *LINK;
	
/* Prototypes */

void print_list(LINK, int);
LINK array_list(int *, int);

/* MAIN */

int main(){
	int a[DIM] = {1, 2, 3, 4, 5};
	LINK ls;
	ls = array_list(a, DIM);
	print_list(ls, DIM);	

	return 0;

}

/* AUX */

void print_list(LINK h, int rec){
	if(!h)
		printf("NULL\n");
	else{
		printf("%d --> ", h -> info);
		print_list(h -> next, --rec);
	}
}

LINK array_list(int a[DIM], int rec){
	if(!rec)
		return NULL;
	else{
		LINK h;
	        h = malloc(sizeof(ELEM));
		h -> info = a[0];
		h -> next = array_list(a + 1, --rec);
		return h;
	}
}	



