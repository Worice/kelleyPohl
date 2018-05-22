/* Exercise 7.7 */

#include <stdio.h>
#include <stdlib.h>

typedef char	data;

typedef struct elem{
	data		info;
	struct elem	*next;
}ELEM;

typedef ELEM *LINK;

typedef enum {false, true} boolean;

LINK string_to_list(char *);
void print_list(LINK);
boolean check_for_string(LINK, char *);
/* MAIN */

int main(){
	char *s = "world";
	char *t = "Halloworldfulloflove!";
	LINK l = NULL;
       	l = string_to_list(t);
	print_list(l);
	printf("%d\n", check_for_string(l, s));
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

boolean check_for_string(LINK h, char *s){
	boolean flag = false;
	LINK p;
	int i;
	while(h && !flag){
		i = 0;
		p = h;
		while(p && s[i] && p -> info == s[i]){
			p = p -> next;
			++i;
		}
		flag = (boolean) (s[i] == '\0');
		h = h -> next;
	}
	return flag;
}




