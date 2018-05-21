/* Exercise 7.4 */

#include <stdio.h>
#include <stdlib.h>
#define DIM	5
#define DIM2	3
typedef struct elem{
	int		data;
	struct elem	*next;
}ELEM;

typedef ELEM *LINK;


int main(){

	int v[DIM] = {1, 2, 3, 4, 5};
	int q[DIM2] = {0, 2, 6};
	LINK l;

	LINK array_to_list(int a[DIM2], int rec){
		if(rec == 0)
			return NULL;
		else{
			LINK head;
			head = malloc(sizeof(ELEM));
			head -> data = a[0];
			head -> next = array_to_list((a + 1), rec - 1);
			return head;
		}
	}

	void print_list(LINK head){
		if(head == NULL)
			printf("NULL\n");
		else{
			printf("%d --> ", head -> data);
			print_list(head -> next);
		}
	}

	l = array_to_list(q, DIM2);
	print_list(l);

	void check_array(LINK head, int v[DIM]){
		if(head){
			int flag = 0;
			for(int i = 0; i < DIM && !flag; ++i)
				flag = head -> data == v[i];
			if(!flag){
				printf("%d ", head -> data);
				check_array(head -> next, v);
			}
			else
				check_array(head -> next, v);
			}
	}

	check_array(l, v);






	return 0;
}
