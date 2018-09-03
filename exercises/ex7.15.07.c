/* Exercise 7.15.07 Tempesta. Alternating mergfe of two lists */

#include<stdio.h>
#include<stdlib.h>

typedef struct elem{
	char data;
	struct elem *next;
}ELEM;

typedef ELEM *LINK;

void print_list(LINK);
LINK enlist(char *s);
LINK alternate(LINK, LINK);

/* MAIN */

int main(){
	char *s1 = "abcde";
       	char *s2 = "ABCDE";
	LINK l1, l2;
	l1 = enlist(s1);
	l2 = enlist(s2);
	print_list(l1);
	print_list(l2);
	alternate(l1, l2);
	print_list(l1);
	print_list(l2);


	return 0;
}


/* AUX */

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

void print_list(LINK l){
	if(!l)
		printf("NULL\n");
	else{
		printf("%c -> ", l -> data);
		print_list(l -> next);
	}
}

LINK alternate(LINK l1, LINK l2){
	if(!l1)
		return l2;
	else{
		l1 -> next = alternate(l2, l1 -> next);
		return l1;
	}
}









