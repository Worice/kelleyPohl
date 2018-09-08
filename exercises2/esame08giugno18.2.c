/* Esame 08 giugno 2018, esercizio 2 */

#include<stdio.h>
#include<stdlib.h>
#define DIM 5 
typedef struct elem{
	int info;
	struct elem *next;
}elem;

typedef elem *link;

void print_list(link);
void print_list2(link, int);

/* MAIN */

int main(){
	int a[DIM] = {1, 2, 3, 4, 5};
	elem e;
	link h;
	
	link enlist(int a[DIM], int start, int end){
		if(start == end)
			return NULL;
		else{
			link l = malloc(sizeof(elem));
			l -> info = a[start];
			l -> next = enlist(a, ++start, end);
			return l;
		}
	}	

	h = enlist(a, 0, DIM);
	print_list(h);
	link h2 = h;

	void circularize(link l, link g){
		if(l -> next == NULL)
			l -> next = g;
		else
			circularize(l -> next, g);
	}
	circularize(h, h2);
	print_list2(h, 5);	

	return 0;
}

/* AUX */

void print_list2(link l, int cycles){
	if(l == l -> next || !cycles)
		printf("stop\n");
	else{
	       	print_list2(l -> next, --cycles);
		printf("%d -> ", l -> info);
	}
}
void print_list(link l){
	if(!l)
		printf("stop\n");
	else{
		printf("%d -> ", l -> info);
	       	print_list(l -> next);
	}
}

