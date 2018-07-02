/* Exercise 7.10 */

#include <stdio.h>
#include <stdlib.h>
#define DIM 3

typedef int data;

typedef struct elem{
	data		info;
	struct elem	*next;
}ELEM;

typedef ELEM *LINK;

LINK array_to_list(int *, int rec);
LINK point(LINK, int);

/* MAIN */

int main(){
	int arr[DIM] = {21, 17, 10};
	LINK ls, lout;
	ls = array_to_list(arr, 17);
	lout = point(ls, 17);
	return 0;
}

LINK array_to_list(int a[], int rec){
	if(!rec)
		return NULL;
	else{
		LINK head = NULL;
		head = malloc(sizeof(ELEM));
		head -> info = a[0];
		head -> next = array_to_list(a + 1, --rec);
	}
}	

	
LINK point(LINK h, int n){
	LINK last_match;
	if(!h)
		return NULL;
	last_match = point(h -> next, n);
	if(last_match == NULL && h -> info == n)
		last_match = h;
	return last_match;
}







