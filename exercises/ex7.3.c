/* Esercizio 7.3 */

#include <stdio.h>
#include <stdlib.h>

typedef char data;

struct element{
	char		data;
	struct element	*next;
};

typedef struct element ELEMENT;
typedef ELEMENT *LINK;

int main(){
	LINK string_to_list(char *s){
		if(s[0] == '\0')
			return NULL;
		else{
			LINK head;
			head = (LINK) malloc(sizeof(ELEMENT));
			head -> data = s[0];
		       	head -> next = string_to_list(s + 1);
		}
	}
	
	void print_list(LINK head){
		if(head == NULL)
			printf("NULL\n");
		else{
			printf("%c --> ", head -> data);
			print_list(head -> next);
		}
	}


	
	LINK l1 = NULL;
	l1 = string_to_list("Hallo!");
	print_list(l1);

	void clean_list(LINK head, data c){
		if(head){
			if(head -> data == c){
				LINK p = head;
				head = head -> next;
				clean_list(head, c);
				free(p);
			}
			else
				clean_list(head -> next, c);
		}
	}
	
	clean_list(l1, 'l');
	print_list(l1);

	return 0;
}	














