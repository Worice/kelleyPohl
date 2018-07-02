/* Exercise 6.23 */

#include<stdio.h>
#include<stdlib.h>
#define DIM 5

typedef int data;
typedef struct elem{
	data		info;
	struct elem	*next;
}ELEM;
typedef ELEM *LINK;

LINK array_list(int *, int);
void print_list(LINK *);

/* MAIN */
int main(){
	int a[DIM] = {1, 2, 3, 4, 5};
	LINK ls;
	ls = array_list(a, DIM);
	print_list(&ls);
	return 0;
}

/* AUX */

LINK array_list(int a[DIM], int rec){
	if(!rec)
		return NULL;
	else{
		LINK h = malloc(sizeof(ELEM));
		h -> info = a[0];
		h -> next = array_list(a + 1, --rec);
		return h;
	}
}

void print_list(LINK *ls){
	if(!(*ls))
		printf("NULL\n");
	else{
		printf("%d --> ", (*ls) -> info);
		printf("%d --> ", &(*ls) -> info);
		print_list(&(*ls) -> next);
	}
}

int remove_sum(LINK *ls, int sum){
	if(*ls){
		int s = remove_sum(&(*ls) -> next, sum);
		if((*ls) -> info <= sum - s && (*ls) -> next == NULL){
			s += (*ls) -> info;
			free(*ls);
			*ls = NULL;
		}return s;
	}
	else
		return 0;
}











