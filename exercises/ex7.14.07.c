/* Exercise Tempesta 7.14.07.c. Delete list from last repetition */

#include<stdio.h>
#include<stdlib.h>
#define DIM 4

typedef struct elem{
	int data;
	struct elem *next;
}ELEM;

typedef ELEM *LINK;

void print_list(LINK);
LINK enlist(int *, int, int);
void remove_elements(LINK *);

/* MAIN */

int main(){
	int a[DIM] = {1, 2, 2, 3};
	LINK l = enlist(a, 0, DIM);
	print_list(l);
	remove_elements(&l);
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

void remove_elements(LINK *l){
	if(*l){
		if(!(*l) -> next){
			free(*l);
			*l = NULL;
		}
		else{
			int foundpair = 0;
			LINK *pc = l;
			LINK prev = *l;
			LINK cur = prev -> next;
			while(cur && prev -> data == cur -> data){
				foundpair = 1;
				pc = &prev -> next;
				prev = cur;
				cur = cur -> next;
			}
			remove_elements(&prev -> next);
			if(!(prev -> next) && !foundpair){
				free(prev);
				pc = NULL;	
			}
		}
	}
}
				


