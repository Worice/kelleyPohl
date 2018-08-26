/* Exercise 6..07 */

#include<stdio.h>
#include<stdlib.h>

typedef struct elem{
	int digit;
	struct elem *next;
} ELEM;

typedef ELEM *list;

list enlist(int);
void print_list(list);
list sum(list, list, int);

/* MAIN */

int main(){
	list l1 = NULL;
	list l2 = NULL;
	list l3 = NULL;
	int n1 = 11111;
	int n2 = 222;
	l1 = enlist(n1);
	l2 = enlist(n2);
	l3 = sum(l1, l2, 0);
	print_list(l1);
	print_list(l2);
	print_list(l3);
	return 0;
}

/* AUX */

list enlist(int n){
	if(n == 0)
		return NULL;
	else{
		list head = malloc(sizeof(ELEM));
		head -> digit = n % 10;
		head -> next = enlist(n / 10);
		return head;
	}
}

void print_list(list head){
	if(head){
		print_list(head -> next);
		printf("%d -> ", head -> digit);
	      }
	else
		printf("NULL\n");
}	
		
list sum(list h1, list h2, int carry){
	if(!h1 && !h2 && !carry)
		return NULL;
	else{
		list next1 = NULL;
		list next2 = NULL;
		
		list result = malloc(sizeof(ELEM));
		int next_carry;

		result -> digit = carry;
		if(h1){
			result -> digit += h1 -> digit;
			next1 = h1 -> next;
		}
		if(h2){
			result -> digit += h2 -> digit;
			next2 = h2 -> next;
		}
		
		next_carry = result -> digit / 10; 
		result -> digit = result -> digit % 10;

		result -> next = sum(next1, next2, next_carry);
		return result;
	}
	
}






