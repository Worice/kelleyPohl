/* Exercise 7.20.07 Tempesta. Remove the last occ occurrences of an item in a list */

#include<stdio.h>
#include<stdlib.h>

typedef struct elem{
	char data;
	struct elem *next;
}ELEM;

typedef ELEM *LINK;

void print_list(LINK);
void enlist(char *, LINK *);

/* MAIN */

int main(){
	char *s = "Ambraca tha sack!";

	LINK l = NULL;

	enlist(s, &l);
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

void enlist(char *s, LINK *l){
	if(!*s)
		*l = NULL;
	else{<F5>











	
