/* Exercise 7.18 Tempesta. From string to list */

#include<stdio.h>
#include<stdlib.h>

typedef struct elem{
	char data;
	struct elem *next;
}ELEM;

typedef ELEM *LINK;

void print_list(LINK);

/* MAIN */

int main(){
	char *s = "embrace the suck";
	LINK l = NULL;

	void ret_enlist(char *s, LINK *l)	

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



