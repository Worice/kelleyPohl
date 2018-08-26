/* Exercise 7.13.07 Tempesta. Count word frequency */

#include<stdio.h>
#include<stdlib.h>
#define DIM 3

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

/* MAIN */

int main(){
	char *s[] = {"hello", "hello", "world!"};
	char *t = "embrace";
	char *u = "embreis";
	printf("Lenght test string '%s': %d\n", t, strlen2(t));
	printf("'%s' and '%s' are %s\n", s[0], s[1] , compare_strings(s[0], s[1]) == 1 ? "equal" : "diff");
	printf("'%s' appears %d times", s[0], count_words("hello", &s[DIM], 0, DIM));
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
		if(compare_strings(s, ss[start])){
			printf("1\n");
			return 1 + count_words(s, ss[], ++start, end);
		}
		else{
			printf("0\n");
			return 0 + count_words(s, ss[], ++start, end);
		}
}

	






