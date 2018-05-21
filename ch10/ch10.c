/* Practice and examples from ch10 theory section */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#

#define EMPTY 	0
#define FULL 	10000

typedef char			data;
typedef enum {true, false}	boolean;

struct elem{
	data		d;
	struct elem	*next;
};

typedef struct elem elem;

struct stack{
	int 	cnt;
	elem	*top;
};

typedef struct stack stack;

struct queue{
	int 	cnt;
	elem	*front;
	elem 	*rear;
};

typedef struct queue queue;

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
		if(head == NULL)
			return 0;
		else
			return (1 + count(head -> next));
	}

	LINK rec_list = NULL;
	rec_list = string_to_list("aaa");
	printf("Recursive list: %d chars\n", count(rec_list));

	void print_list(LINK head){
		if(head == NULL)
			printf("NULL\n");
		else{
			printf("%c --> ", head -> data);
			print_list(head -> next);
		}
	}

	print_list(rec_list);
			
	void concatenate(LINK head1, LINK head2){
		assert(head1 != NULL);	
		if(head1 -> next == NULL)
			head1 -> next = head2;
		else
			concatenate(head1 -> next, head2);
	}

	LINK rec_list2  = string_to_list("bbb");
	
	concatenate(rec_list, rec_list2);

	print_list(rec_list);

	void insert(LINK h1, LINK h2, LINK n){
		assert(h1 -> next == h2);
		h1 -> next = n;
		n -> next = h2;
	}

	LINK single = string_to_list("C");

	insert(rec_list -> next, rec_list -> next -> next, single);
	
	
	print_list(rec_list);

	void delete_list(LINK h){
		if(head != NULL){
			delete_list(head -> next);
			free(head);
		}
	}	

	/* Paragraph 10.5 */
       	printf("Paragraph 10.5\n");
	
	stack mstack;

	void initialize(stack *stk){
		stk -> cnt = 0;
		stk -> top = NULL;
	}	

	void push(data d, stack *stk){
		elem *p;
		p = malloc(sizeof(elem));
		p -> d = d;
		p -> next = stk -> top;
		stk -> top = p;
		stk -> cnt++;
	}

	data pop(stack *stk){
		data d;
		elem *p;
		d = stk -> top -> d;
		p = stk -> top;
		stk -> top = stk -> top -> next;
		stk -> cnt--;
		free(p);
		return d;
	}

	data value(stack *stk){
		return (stk -> top -> d);
	}

	boolean full(stack *stk){
		return((boolean) (stk -> cnt == FULL));
	}
 	
	boolean empty(stack *stk){
		return((boolean)(stk -> cnt == EMPTY));
	}
	
	printf("Let's put a string on the list stack:\n");
	char s[] = "abcde";
	printf("%s\n", s);
	
	initialize(&mstack);

	for(int j = 0; s[j] != '\0'; ++j)
		if(!full(&mstack))
			push(s[j], &mstack);

	printf("From s_stack:\n");

	printf("%c", mstack.top -> d);

	while(!empty(&mstack))
		putchar(pop(&mstack));
	printf("\n");

	/* Paragraph 10.7 */
	printf("Paragraph 10.7\n");

	boolean q_empty(queue *q){
		return((boolean)(q -> cnt == EMPTY));
	};

	void init_queue(queue *q){
		q -> front = NULL;
		q -> rear = NULL;
		q -> cnt = 0;
	};
	
	data enqueue(data d, queue *q){
		elem *p;
		p = malloc(sizeof(elem));
		p -> d = d;
		p -> next = NULL;
		if(!q_empty(q)){
			q -> rear -> next = p;
			q -> rear = p;
		}
		else
			q -> front = q -> rear = p;
		q -> cnt++;
	};
		
	data dequeue(queue *q){
		data 	d;
		elem 	*p;
		d = q -> front -> d;
		p = q -> front;
		q -> front = q -> front -> next;
		q -> cnt--;
		free(p);
		return d;
	};

	data front(queue *q){
		return(q -> front -> d);
	};


	boolean qfull(queue *q){
		return((boolean)(q -> cnt == FULL));
	};

	queue mq;

	init_queue(&mq);

	char sq[] = "Hello!";
	printf("sq: %s\n", sq);

	for(int k = 0; sq[k] != '\0'; ++k)
		if(!qfull(&mq))
			enqueue(sq[k], &mq);

	while(!q_empty(&mq))
		putchar(dequeue(&mq));

	putchar('\n');



	return 0;
}


