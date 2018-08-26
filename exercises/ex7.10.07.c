/* Exercise 7.10.07 Tempesta. Last occurrence of an element */

#include<stdio.h>
#include<stdlib.h>
#define DIM 4

typedef struct elem{
	int data;
	struct elem *next;
}ELEM;

typedef ELEM *LINK;

LINK enlist(int *, int, int);

void print_list(LINK);

LINK last(LINK, int);

/* MAIN */
int main(){
	int a[DIM] = {1, 3, 3, 4};
	LINK l = enlist(a, 0, DIM);
	print_list(l);
	LINK p = last(l, 3);	
	printf("%d\n", p -> data);
	
	return 0;
}

/* AUX */

LINK enlist(int *a, int start, int end){
	if(start == end)
		return NULL;
	else{
		LINK h = (LINK) malloc(sizeof(LINK));
		h -> data = a[start];
		h -> next = enlist(a, ++start, end);
		return h;
	}
}

void print_list(LINK h){
	if(!h)
		printf("NULL\n");
	else{
		printf("%d -> ", h -> data);
		print_list(h -> next);
	}
}


LINK last(LINK l, int n){
	LINK point_last;

	if(!l)
		return NULL;

	point_last = last(l -> next, n);
	if(point_last == NULL && l -> data == n)
		point_last = l;
	return point_last;
}

	










