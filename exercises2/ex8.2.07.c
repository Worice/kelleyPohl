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
}elem_dl;

typedef elem_dl *link_dl;

/* MAIN */

int main(){

	int a[DIM] = {1, 2};

	link_dl enlist(link_dl *head, link_dl *tail, int *a, int start, int end){
		if(start == end)
			return NULL;
		else{
			link_dl node = malloc(sizeof(elem_dl));
			node -> info = a[start];
			node -> next = NULL;
			node -> prev = *tail;
			if(*head == NULL)
				*head = node;
			else
				(*tail) -> next = node;
			*tail = node;
			(*tail) -> next = enlist(head, tail, a, ++start, end);
			return node;

		}
	}

	elem_dl e;
	link_dl dl2 = &e, dl1 = NULL;
	enlist(&dl1, &dl2, a, 0, DIM);
	printf("%d -> ", dl2 -> info);
	printf("%d -> ", dl2 -> next -> info);

	return 0;
}
