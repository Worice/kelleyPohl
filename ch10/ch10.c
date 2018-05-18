/* Practice and examples from ch10 theory section */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct list{
	char		data;
	struct list	*next;
};


typedef struct list ELEMENT;
typedef ELEMENT *LINK;


/* MAIN */

int main(){
	ELEMENT a, b, c;
	a.data = 'a'; b.data = 'b'; c.data = 'c';
	a.next = &b; b.next = &c; c.next = NULL;
	printf("%c\n", a.next -> next -> data);

	LINK head;

	head = malloc(sizeof(ELEMENT));

	head -> data = 'd';
	head -> next = NULL;
	
	printf("%c\n", head -> data);

	head -> next = malloc(sizeof(ELEMENT));
	head -> next -> data = 'e';
	head -> next -> next = NULL;

	head -> next -> next = malloc(sizeof(ELEMENT));
	head -> next -> next -> next = NULL;
	head -> next -> next -> data = 'f';

	printf("%c\n", head -> next -> next -> data);

	/* Paragraph 10.3 */
	printf("Paragraph 10.3\n");

	LINK string_to_list(char a[]){
		LINK head;

		if(a[0] == '\0')
			return NULL;
		else{
			head = malloc(sizeof(ELEMENT));
			head -> data = a[0];
			head -> next = string_to_list(a + 1);
			return head;
		}
	}

	LINK s_t_l(char a[]){
		LINK head = NULL, tail;
		int i;
		
		if(a[0] != '\0'){
			head = malloc(sizeof(ELEMENT));
			head -> data = a[0];
			tail = head;

			for(i = 1; a[i] != '\0';++i){
				tail -> next = malloc(sizeof(ELEMENT));
				tail = tail -> next;
			       	tail -> data = a[i];
			}
			tail -> next = NULL;
		}
		return head;
	}

	/* Paragraph 10.4 */
	printf("Paragraph 10.4\n");

	int count(LINK head){
		if(head -> next == NULL)
			return 0;
		else
			return (1 + count(head -> next));
	}

	LINK rec_list = NULL;
	rec_list = string_to_list("Mi ti to mare");
	printf("Recursive list: %d chars\n", count(rec_list));

	void print_list(LINK head){
		if(head -> next == NULL)
			printf("NULL\n");
		else{
			printf("%c --> ", head -> data);
			print_list(head -> next);
		}
	}

	print_list(rec_list);
			
	void concatenate(LINK head1, LINK head2){
		assert(head1 != NULL);	
		if(head1 -> next = NULL)
			head1 -> next = head2;
		else
			concatenate(head1 -> next, head2);
	}

	LINK rec_list2  = string_to_list("e to pare!");
	
	concatenate(rec_list, rec_list2);

	print_list(rec_list);




	return 0;
}


