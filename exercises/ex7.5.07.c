/* Exercise 7.5.07 Tempesta. Indentify words in paragraph */

#include<stdio.h>
#include<stdlib.h>

typedef struct elem{
	char *word;
	struct elem *next;
}ELEM;

typedef ELEM *LINK;

void print_list(LINK);
LINK enlist(char *s);
int strlen2(char *);

/* MAIN */

int main(){
	char *s = "ciao begli uomini!";
	printf("Len %d\n", strlen2(s));
	LINK l = NULL;
	l = enlist(s);
	print_list(l);
	printf("well done\n");
	return 0;
}

/* AUX */

void print_list(LINK l){
	if(!l)
		printf("NULL\n");
	else{
		printf("%s -> ", l -> word);
		print_list(l -> next);
	}
}

LINK enlist(char *s){
	if(!*s)
		return NULL;
	else if(*s == ' ')
		enlist(s + 1);
	else{
		LINK h = (LINK)malloc(sizeof(ELEM));
		int len = strlen2(s);
		h -> word = (char *)malloc((len + 1) * sizeof(char));
		int i;
		for(i = 0; i < len;  ++i)
				(h -> word)[i] = s[i];
		(h -> word)[len] = '\0';
		h -> next = enlist(s + len);
		return h;
	}
}

int strlen2(char *s){
	if(!*s || *s == ' ')
		return 0;
	else 
		return 1 + strlen2(s + 1);
}











