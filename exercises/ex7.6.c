/* Exercise 7.6 */

#include <stdio.h>

#include <stdlib.h>

typedef char data;

typedef struct elem{
	data		info;
	struct elem	*next;
}ELEM;

typedef ELEM *LINK;

typedef enum boolean {false, true} boolean;

LINK string_to_list(char *s);
void print_list(LINK);
boolean list_compare(LINK, LINK);

/* MAIN */

int main(){
	
	LINK l1 = NULL, l2 = NULL;

	l1 = string_to_list("Hello world!");
	l2 = string_to_list("Hello world!");

	print_list(l1);
	print_list(l2);

	printf("%d\n", list_compare(l1, l2));
		
	return 0;
}

/* AUX */


LINK string_to_list(char *s){
	if(s[0] == '\0')
		return NULL;
	else{
		LINK head;
		head = malloc(sizeof(ELEM));
		head -> info = s[0];
		head -> next = string_to_list(s + 1);
		return head;
	}
}

void print_list(LINK head){
	if(head == NULL)
		printf("NULL\n");
	else{
		printf("%c --> ", head -> info);
		print_list(head -> next);
	}
}

boolean list_compare(LINK head1, LINK head2){
	if(head1 != NULL && head2 != NULL)
		if(head1 -> info == head2 -> info)
			return (true && list_compare(head1 -> next, head2 -> next));
		else
			return false;
	else
		return true;
}












