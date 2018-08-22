/* Exercise 7.4.07 Tempesta. Difference between list and vector */

#include<stdio.h>
#include<stdlib.h>
#define DIM 5
#define DIM2 2

typedef struct elem{
	int dt;
	struct elem *nx;
}ELEM;

typedef ELEM *LINK;

void print_list(LINK);
LINK enlist(int *, int, int);
void clear_list(LINK *, int *, int, int);


/* MAIN */

int main(){
	int v[DIM] = {1, 2, 3, 4, 5};
	int q[DIM2] = {2, 4};
	LINK l = NULL;
	l = enlist(v, 0, DIM);
	print_list(l);
	clear_list(&l, q, 0, DIM2);
	print_list(l);
	return 0;
}

/* AUX */

void print_list(LINK l){
	if(!l)
		printf("NULL\n");
	else{
		printf("%d -> ", l -> dt);
		print_list(l -> nx);
	}
}

LINK enlist(int *a, int start, int end){
	if(start == end)
		return NULL;
	else{
		LINK l = malloc(sizeof(ELEM));
		l -> dt = a[start];
		l -> nx = enlist(a, ++start, end);
		return l;
	}
}


void clear_list(LINK *l, int *a, int start, int end){
	if(*l){
		clear_list(&((*l) -> nx), a, 0, DIM2);
		int flag = 0;
		for(; start != end && !flag; ++start)
			if((*l) -> dt == a[start])
				flag = 1;
		if(flag){
			LINK g = *l;
			*l = (*l) -> nx;
			free(g);
		}
	}
}










