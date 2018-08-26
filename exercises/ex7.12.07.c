/* Exercise 7.11.07 Tempesta. Reverse a List */

#include<stdio.h>
#include<stdlib.h>

typedef struct elem{
	char data;
	struct elem *next;
}ELEM;

typedef ELEM *LINK;

void print_list(LINK);

LINK enlist(char *);

void reverse(LINK *);
/* MAIN */

int main(){
	char *s = "embrace the suck";
	LINK l = enlist(s);
	print_list(l);
	reverse(&l);
	print_list(l);
	return 0;
}

/* AUX */

void print_list(LINK l){
	if(!l)
		printf("NULL\n");
	else{
		printf("%c -> ", l -> data);
		print_list(l -> next);
	}
}

LINK enlist(char *s){
	if(!*s)
		return NULL;
	else{
		LINK l = (LINK) malloc(sizeof(ELEM));
		l -> data = *s;
		l -> next = enlist(s + 1);
		return l;
	}
}

void reverse(LINK *l){
	if(*l && (*l) -> next){
		LINK p = (*l) -> next;
		reverse(&p);
		(*l) -> next -> next = *l;
		(*l) -> next = NULL;
		(*l) = p;
	}
}






