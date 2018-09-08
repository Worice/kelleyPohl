/* 8.1 Append an element to a list
Write a function that, given a doubly linked list and an integer, appends to the tail of the list a new
node containing the provided number. The function returns 1 if the allocation in the heap of the
new node succeeds, 0 otherwise. */

#include<stdio.h>
#include<stdlib.h>

typedef struct elemDL{
	int info;
	struct elemDL *prev;
	struct elemDL *next;
}ELEM_DL;

typedef ELEM_DL *LINK_DL;

/* MAIN */

int main(){
	
	ELEM_DL e;

	LINK_DL dl = &e;

	int append(LINK_DL *head, LINK_DL *tail, int n){
		LINK_DL node = (LINK_DL) malloc(sizeof(ELEM_DL));
		if(node == NULL)
			return 0;
		node -> info = n;
		node -> next = NULL;
		node -> prev = *tail;
		if(*head == NULL){
			*head = node;
		}
		else{
			(*tail) -> next = node;
		}
		*tail = node;
		return 1;
	}	

	append(&dl, &dl, 99);
	printf("%d\n", dl -> info);
	
	return 0;
}
