/* Exercise 7.13.07 Tempesta. Count word frequency */

#include<stdio.h>
#include<stdlib.h>
#define DIM 4 

typedef struct elem{
	char *word;
	int word_count;
	struct elem *next;
}ELEM;

typedef ELEM * LINK;

void print_list(LINK);
int strlen2(char *);
int compare_strings(char *, char *);
int count_words(char *, char *[], int, int);
int check_list(char *, LINK);
LINK enlist(char *[], int, int);
void print_list(LINK);


/* MAIN */

int main(){
	char *s[] = {"hello", "world!", "hello", "hello"};
	char *t = "embrace";
	char *u = "embreis";
	printf("Lenght test string '%s': %d\n", s[1], strlen2(s[1]));
	printf("'%s' and '%s' are %s\n", s[0], s[1] , compare_strings(s[0], s[1]) == 1 ? "equal" : "diff");
	printf("'%s' appears %d times\n", "hello", count_words("hello", s, 0, DIM));
	LINK l = enlist(s, 0, DIM);
	print_list(l);
	printf("'%s' %s in list\n", "world!", (check_list("world!", l) == 1) ? "is": "is not");
	
	return 0;
}

/* AUX */

int strlen2(char *s){
	if(!*s)
		return 0;
	else
		return 1 + strlen2(s + 1);
}

int compare_strings(char *s1, char *s2){
	if(!*s1 && !*s2)
		return 1;
	else
		if(*s1 == *s2)
			compare_strings(s1 + 1, s2 + 1);
		else
			return 0;
}



int count_words(char *s, char *ss[], int start, int end){
	if(start != end)
		if(compare_strings(s, ss[start]))
			return 1 + count_words(s, ss, ++start, end); 
		else
			return 0 + count_words(s, ss, ++start, end);
	return 0;
}

	
int check_list(char *s, LINK l){
	if(!l)
		return 0;
	else if(compare_strings(s, l -> word))
		return 1;
	else
		check_list(s, l -> next);
}

LINK enlist(char *s[], int start, int end){
	if(start == end)
		return NULL;
	else{
		LINK l = (LINK) malloc(sizeof(ELEM));
		printf("%s\n", s[start]);
		printf("'%s' %s in list\n", s[start], (check_list(s[start], l) == 1) ? "is": "is not");
		printf("2\n");
		if(check_list(s[start], l)){
			int i;
			int len = strlen2(s[start]);
			printf("3\n");
			l -> word = (char *) malloc((len + 1) * sizeof(char));
			printf("4\n");
			for(i = 0; i < len; ++i){
				printf("%d\n", i);
				(l -> word)[i] = s[start][i];
			}
			(l -> word)[len] = '\0';
			l -> word_count = count_words(l -> word, s, start, end);
		
			l -> next = enlist(s, ++start, end);
		}
		return l;
	}
}
		
void print_list(LINK l){
	if(!l)
		printf("NULL\n");
	else{
		printf("%s -> %d => ", l -> word, l -> word_count);
		print_list(l -> next);
	}
}





