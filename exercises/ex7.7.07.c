/* Exercise 7.7.07 Tempesta. Substring in list */

#include<stdio.h>
#include<stdlib.h>

typedef struct elem{
	char dt;
	struct elem *nx;
}ELEM;

typedef ELEM *LINK;

void print_list(LINK);
LINK enlist(char *s);
int substring(LINK, char *); 
int substring2(LINK, char *); 
int substring3(LINK, char *);
/* MAIN */

int main(){
	char *s = "es gibt zu viel moglikheiten";
	LINK l = enlist(s);
	char *q = "gibt";
	print_list(l);
	printf("Strig present: %d\n", substring3(l, s));
	return 0;
}

/* AUX */



LINK enlist(char *s){
	if(!*s)
		return NULL;
	else{
		LINK h = (LINK) malloc(sizeof(ELEM));
		h -> dt = *s;
		h -> nx = enlist(s + 1);
		return h;
	}
}

void print_list(LINK l){
	if(!l)
		printf("NULL\n");
	else{
		printf("%c -> ", l -> dt);
		print_list(l -> nx);
	}
}

int substring(LINK l, char *s){
	if(!*s)
		return 1;
	else if(!l)
		return 0;
	else{
		LINK p = l;
		if(s[0] == l -> dt){
			int i;
			for(i = 1; s[i] == l -> dt && s[i] != '\0'; ++i)
				substring(l -> nx, s);
		}
		else
			substring(p -> nx, s);
	}
}
 
int substring2(LINK l, char *s){
	LINK pc;

	int found = 0;
	int i;

	while(l && !found){
		i = 0;
		pc = l;
		while(pc && s[i] && pc -> dt == s[i]){
			pc = pc -> nx;
			i++;
		}
		found = (s[i] == '\0');
		l = l -> nx;
	}

	return found;
}


int substring3(LINK l, char *s){
	LINK g;

	int found = 0;
	int i;

	while(l && !found){
		i = 0;
		g = l;
		while(g && s[i] && g -> dt == s[i]){
			g = g -> nx;
			++i;
		}
		found = (s[i] == '\0');
		l = l -> nx;
	}
	return found;
}


















