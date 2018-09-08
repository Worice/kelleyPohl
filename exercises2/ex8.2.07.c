/* 8.2 Deletion of an element from the list
Write a function that removes from a doubly linked list the first occurrence of the number provided
as input to the function. */

#include<stdio.h>
#include<stdlib.h>
#define DIM 2

typedef struct elem_dl{
	int info;
	struct elem_dl *next;
	struct elem_dl *prev;
}ELEM_DL;

typedef ELEM_DL *LINK_DL;

/* MAIN */

int main(){

	LINK_DL create_node(){
		LINK_DL node = (LINK_DL) malloc(sizeof(ELEM_DL));
		node -> next = NULL;
		node -> prev = NULL;
		return node;
	}
	
	LINK_DL dl = create_node();
	dl -> info = 99;
	printf("%d\n", dl -> info);

	void append(LINK_DL *head, LINK_DL *tail, int n){
		LINK_DL node = create_node();
		node -> info = n;
		node -> next = NULL;
		node -> prev = *tail;
		if(*head == NULL)
			*head = node;
		else
			(*tail) -> next = node;
		*tail = node;
	}
	
	int a[DIM] = {1, 2};

	LINK_DL enlist(LINK_DL *head, LINK_DL *tail, int *a, int start, int end){
		if(start == end)
			return NULL;
		else{
			printf("h1\n");
			LINK_DL node = create_node();
			printf("h2\n");
			node -> info = a[start];
			printf("h3\n");
			node -> next = NULL;
			printf("h4\n");
			node -> prev = *tail;
			printf("h5\n");
			if(*head == NULL)
				*head = node;
			else
				(*tail) -> next = node;
			*tail = node;
			printf("h6\n");
			(*tail) -> next = enlist(head, tail, a, ++start, end);
			return node;

		}
	}

	LINK_DL dl2 = NULL;
	enlist(&dl2, &dl2, a, 0, DIM);
	printf("%d -> ", dl2 -> info);
	printf("%d -> ", dl2 -> next -> info);

	return 0;
}
