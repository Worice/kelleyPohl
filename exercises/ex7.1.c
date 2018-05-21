/* Esercizio 7.1 */

#include <stdio.h>
#include <stdlib.h>

struct elem{
	int		data;
	struct elem	*next;
};

typedef struct elem ELEM;
typedef ELEM *LINK;

int main(){
	int n;
	int *p = &n;
	printf("Type a positive integer:\n");
	scanf("%d", &n);
	LINK stk = NULL;
	
	LINK num_to_list(int n){
		if(n == 0)
			return NULL;
		else{
			LINK head;
			head = malloc(sizeof(ELEM));
			head -> data = n % 10;
			head -> next = num_to_list(n / 10);
			return head;
		}
	}

	num_to_list(123);

	void print_list(LINK head){
		if(head == NULL){
			printf("NULL\n");
		}
		else{
			print_list(head -> next);
			printf("%d --> ", head -> data);
		}
	}

	LINK lst;
	lst = num_to_list(n);
	print_list(lst);
	return 0;
}
		
		
		 
		
	
