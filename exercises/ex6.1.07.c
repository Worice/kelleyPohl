/* Exercise 6.1.07 */

#include<stdio.h>
#include<stdlib.h>

typedef struct elem{
	int digit;
	struct elem *next;
} ELEM;

typedef ELEM *list;

list enlist(int);
void print_list(list);

/* MAIN */

int main(){
	list head = NULL;
	int n = 123456;
	head = enlist(n);
	print_list(head);
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
		







