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
	int n, n2;

	printf("Type two positive integers:\n");
	scanf("%d", &n);
	scanf("%d", &n2);
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

	LINK lst = NULL;
	lst = num_to_list(n);
	print_list(lst);

	LINK lst2 = NULL;
	lst2 = num_to_list(n2);
	print_list(lst2);

	LINK lst3 = NULL;
	
	LINK list_sum(LINK lst1, LINK lst2, int carry){
		if(lst1 == NULL && lst2 == NULL && carry == 0)
			return NULL;
		else{
			LINK next1 = NULL;
			LINK next2 = NULL;
			int next_carry;
			LINK result = malloc(sizeof(ELEM));
			result -> data = carry;
			if(lst1){
				result -> data += lst1 -> data;
				next1 = lst1 -> next;
			}
			if(lst2){
				result -> data += lst2 -> data;
				next2 = lst2 -> next;
			}
			next_carry = result -> data / 10;
			result -> data = result -> data % 10;

			result -> next = list_sum(next1, next2, next_carry);
			return result;
		}
	}

	lst3 = list_sum(lst, lst2, 0);
	print_list(lst3);
	printf("NULL\n");

	return 0;
}
		
		
		 
		
	
