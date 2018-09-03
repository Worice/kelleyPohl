/* Exercise Tempesta 7.19.07. Find last pair in a list */

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

int main(void){
	char *s = "Embrace the ssuck!";
	LINK l = NULL;

	enlist(s, &l);
	print_list(l);
	LINK find_pair(LINK l){
		if(l == NULL || l -> next == NULL)
			return NULL;
		else{
			LINK p = find_pair(l -> next);
			if(p)
				return p;
			else
				return (l -> data == l -> next -> data) ? l : NULL;
		}
	}
	LINK h = find_pair(l);
	printf("%c\n", h -> data);
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

void enlist(char *s, LINK *l){
	if(!*s)
		*l = NULL;
	else{
		LINK new = (LINK) malloc(sizeof(ELEM));
		enlist(s + 1, l);
		new -> data = *s;
		new -> next = *l;
		*l = new;
	}
}
