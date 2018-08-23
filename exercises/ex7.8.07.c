/* Exercise 7.8.07 Tempesta. Comulative sums */

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
void cum_sum(LINK);

/* MAIN */

int main(){
	int a[DIM] = {1, 2, 3, 4};
	LINK l = enlist(a, 0, DIM);
	print_list(l);
	cum_sum(l);
	print_list(l);
	return 0;
}

/* AUX */

LINK enlist(int *a, int start, int end){
	if(start == end)
		return NULL;
	else{
		LINK head = (LINK) malloc(sizeof(ELEM));
		head -> data = a[start];
		head -> next = enlist(a, ++start, end);
		return head;
	}
}

void print_list(LINK l){
	if(!l)
		printf("NULL\n");
	else{
		printf("%d -> ", l -> data);
		print_list(l -> next);
	}
}

void cum_sum(LINK l){
	if(l != NULL && l -> next != NULL){
		cum_sum(l -> next);
		l -> data += l -> next -> data;
	}
}











