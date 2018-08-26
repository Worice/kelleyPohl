/* Excercise 6.4.07 Tempesta */

#include<stdio.h>
#include<stdlib.h>
#define DIM 4

/* PROTOTYPES */

typedef struct elem{
	int data;
	struct elem *next;
}ELEM;

typedef ELEM *LINK;

void print_array(int *, int, int);
LINK enlist(int [], int, int);
void print_list(LINK);
void checker(LINK l, int [], int, int);
/* MAIN */

int main(){
	int a[DIM] = {1, 2, 3, 4};
	print_array(a, 0, DIM);
	int b[5] = {2, 4, 6, 8, 10};
	print_array(b, 0, 5);
	LINK l1 = NULL;
	l1 = enlist(b, 0, 5);
	print_list(l1);
	checker(l1, a, 0, DIM);
	print_list(l1);

	return 0;
}

/* AUX */

void print_array(int a[], int start, int end){
	if(start == end)
		printf("\n");
	else{

		if(start == 0)
			printf("|");
		printf(" %d |", a[start]);
		print_array(a, ++start, end);
	}
}

LINK enlist(int n[], int start, int end){
	if(start == end)	
		return NULL;
	else{
		LINK head = malloc(sizeof(int));
		head -> data = n[start];
		head -> next = enlist(n, ++start, end);
		return head;
	}
}


void print_list(LINK l){
	if(l ==  NULL)
		printf("NULL\n");
	else{
		printf("%d -> ", l -> data);
		print_list(l -> next);
	}
}
	

void checker(LINK l, int n[], int start, int end){
	if(l == NULL)
		return;
	else{
		if(start != end)
			if(l -> data == n[start]){
				LINK g = l;
				l = (*l).next;
				checker(l -> next, n, 0, end);
				free(g);
			}
			else
				checker(l, n, ++start, end);
		
		else
			checker(l -> next, n, 0, end);
	}	

}








