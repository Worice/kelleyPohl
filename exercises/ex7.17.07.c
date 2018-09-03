/* Exercise 7.17.07 Tempesta. Erase contiguos identical cells in a list */

#include<stdio.h>
#include<stdlib.h>

typedef struct elem{
	char data;
	struct elem *next;
}ELEM;

typedef ELEM *LINK;

void print_list(LINK);
LINK enlist(char *);

/* MAIN */

int main(){
	char *s = "aaaabbb";
	LINK l = enlist(s);
	print_list(l);

	void erase(LINK *l){
		if(*l && (*l) -> next){
			if((*l) -> data == (*l) -> next -> data){
				LINK supp = (*l) -> next -> next;
				free((*l) -> next);
				free((*l));
				*l = supp;
				erase(l);
			}
			else
				erase(&((*l) -> next));
		}
	}


	void erase2(LINK *l){
		if((*l) && (*l) -> next){
			if((*l) -> data == (*l) -> next -> data){
				LINK third = (*l) -> next -> next;
				free((*l) -> next);
				free((*l));
				*l = third;
				erase(l);
			}
			else
				erase(&(*l) -> next);
		}
	}


	erase2(&l);
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










