/* Exercise 7.06.07 Tempesta. Compare list of strings */

#include<stdio.h>
#include<stdlib.h>

typedef struct elem{
	char *word;
	struct elem *next;
}ELEM;

typedef ELEM *LINK;

int are_equal(char *, char *);
void print_list(LINK);
int compare();
LINK enlist(char *);
int strlen2(char *);

/* MAIN */

int main(){
	char *s1 = "embrace the suck?";
	char *s2 = "embrace the suck";
	printf("%d\n", are_equal(s1, s2));
	LINK l1 = NULL, l2 = NULL;
	l1 = enlist(s1);
	l2 = enlist(s2);
	print_list(l1);
	print_list(l2);
	printf("Lists are %d!\n", compare(l1, l2) );
	return 0;
}

/* AUX */

int are_equal(char *s1, char *s2){
	if(!*s1 && !*s2)
		return 1;
	else{
		if(*s1 == *s2)
			are_equal(s1 + 1, s2 + 1); 
		else
			return 0;
	}
}

int strlen2(char *s){
	if(!*s || *s == ' ')
		return 0;
	else
		return 1 + strlen2(s + 1);
}

void print_list(LINK h){
	 if(!h)
		 printf("NULL\n");
	 else{
		 printf("%s -> ", h -> word);
		 print_list(h -> next);
	}
}

LINK enlist(char *s){
	if(!*s)
		return NULL;
	else if(*s == ' ')
		enlist(s + 1);
	else{
		LINK h = (LINK)malloc(sizeof(ELEM));
		int i;
		int len = strlen2(s);
		h -> word = (char *) malloc((1 + len) * (sizeof(char)));
		for(i = 0; i < len; ++i)
			(h -> word)[i] = s[i];
		(h -> word)[len] = '\0';
		h -> next = enlist(s + len);
		return h;
	}
}

int compare(LINK l1, LINK l2){
	if(!l1 && !l2)
		return 1;
	else{
		if(!l1 || !l2)
			return 0;
		else
			return (are_equal(l1 -> word, l2 -> word) && compare(l1 -> next, l2 -> next));
	}
}







