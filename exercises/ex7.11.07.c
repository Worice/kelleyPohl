/* Exercise 7.11.07.c Tempesta. Set zeroes after the last positive element of an integer list */

#include<stdio.h>
#include<stdlib.h>
#define DIM 5

typedef struct elem{
	int data;
	struct elem *next;
}ELEM;

typedef ELEM *LINK;

void print_list(LINK);
LINK enlist(int *, int, int);
void zeroes(LINK);

/* MAIN */

int main(){
	int a[DIM] = {-1, 2, -4, -3, -2};
	LINK l = enlist(a, 0, DIM);
	print_list(l);
	zeroes(l);
	print_list(l);
	return 0;
}

/* AUX */

void print_list(LINK l){
	if(!l)
		printf("NULL\n");
	else{
		printf("%d -> ", l -> data);
		print_list(l -> next);
	}
}

LINK enlist(int *a, int start, int end){
	if(start == end)
		return NULL;
	else{
		LINK l = (LINK) malloc(sizeof(ELEM));
		l -> data = a[start];
		l -> next = enlist(a, ++start, end);
		return l;
	}
}

void zeroes(LINK l){
	if(l){
		zeroes(l -> next);
		if((!(l -> next) || l -> next -> data == 0) && l -> data < 1)
			l -> data = 0;
	}
}












