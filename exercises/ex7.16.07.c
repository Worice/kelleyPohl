/* Exercise Tempesta 7.16.07. Compress a list */

#include<stdio.h>
#include<stdlib.h>
#define DIM 7 

typedef struct elem{
	int data;
	struct elem *next;
}ELEM;

typedef ELEM *LINK;

void print_list(LINK);
LINK enlist(int *, int, int);
int count_changes(LINK);
int count_contiguos(LINK, LINK *);
void comprex(LINK, int **, int *);
void print_array(int *, int, int);

/* MAIN */

int main(){
	int a[DIM] = {1, 1, 0, 0, 0, 0, 1};
	print_array(a, 0, DIM);
	int *b;
		
	LINK l = enlist(a, 0, DIM);
	print_list(l);
	printf("sequences: %d\n", count_changes(l));
	LINK *l2 = &l; 
	printf("After first sequence: %d\n", (*l2) -> data);
	printf("first sequence: %d\n", count_contiguos(l, l2));
	printf("After first sequence: %d\n", (*l2) -> data);
	int size;
	comprex(l, &b, &size);	
	printf("size %d\n", size);
	printf("first el%d\n", b[0]);
	print_array(b, 0, size);
	return 0;
}

/* AUX */

void print_array(int *a, int start, int end){
	if(start == end)
		printf("\n");
	else{
		printf("| %d |", a[start]); 
		print_array(a, ++start, end);
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


int count_changes(LINK l){
	if(!l) 
		return 0;
	else if(!l -> next)
		return 1;
	else{
		if(l -> next -> data == l -> data)
			return count_changes(l -> next);
		else
			return 1 + count_changes(l -> next);
	}
}

int count_contiguos(LINK l, LINK *mark){
	if(!l) 
		return 0;
	else if(!l -> next){
		return 1;
	}
	else{
		if(l -> data == l -> next -> data){
			return 1 + count_contiguos(l -> next, &(l -> next));
		}
		else{
			return 1;
		}
	}
}
		      
void comprex(LINK l, int **a, int *size){
	*size = count_changes(l);
	*a = (int *)malloc((*size) * sizeof(int));
	int i;
	LINK mark1 = l;
	for(i = 0; i < *size; ++i ){
		LINK *mark2;
		int seq = count_contiguos(mark1, mark2);
		if(l -> data == 0)
	     		(*a)[i] = (-1) * seq;
			
		if(l -> data == 1)
	     		(*a)[i] = seq;
		
		mark1 = (*mark2) -> next;	
	 }
}


