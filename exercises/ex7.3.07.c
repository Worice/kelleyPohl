#include<stdio.h>
#include<stdlib.h>

typedef struct chelem{
	char ch;
	struct chelem *next;
}ELEM;

typedef ELEM *LINK;

LINK enlist(char *);
void print_list(LINK);
void remover(LINK *);
void remover2(LINK);

/* MAIN */

int main(){
	char *s = "Hallo sacker";
	ELEM l = {'\0', NULL};
	LINK lp = &l;
	lp = enlist(s);
	print_list(lp);
	remover(&lp);
	print_list(lp);
	remover2(lp);
	print_list(lp);
	return 0;
}

/* AUX */

LINK enlist(char *s){
	if(!*s)
		return NULL;
	else{
		LINK h = malloc(sizeof(char));
		h -> ch = s[0];
		h -> next = enlist(s + 1);
		return h;
	}
}

void print_list(LINK h){
	if(!h)
		printf("NULL\n");
	else{
		printf("%c -> ", h -> ch);
		print_list(h -> next);
	}
}

void remover(LINK *h){
	if(*h){
		remover(&((*h) -> next));
		if((*h) -> ch == 'A' || (*h) -> ch == 'a'){
			LINK g = *h;
			*h = (*h) -> next;
			free(g);
		}
	}	
}

void remover2(LINK h){
	if(h){
		remover2(h -> next);
		if(h -> ch == 'l' || h -> ch == 'k'){
			LINK g = h;
			h = h -> next;
			free(g);
		}
	}
}
















