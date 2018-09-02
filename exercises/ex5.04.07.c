/* Exercise 5.07.07 Tempesta. Write all anagrams of a string */

#include<stdio.h>
#include<stdlib.h>


void print_array(char *);
void swap(char *, char *);
int strlen2(char *);

/* MAIN */

int main(){
	char a[4] = "abc";
	print_array(a);
		
	void anagram(char *s1, char *s2){
		if(!*s2)
			printf("%s\n", s1);
		else{
			int l = strlen2(s2) - 1;
			int i;
			for(i = 0; i <= l; ++i){
				swap(s2, s2 + i);
				anagram(s1, s2 + 1);
				swap(s2, s2 + i);
			}
		}
	}

	anagram(a, a);

	return 0;
}

/* AUX */

void print_array(char *a){
	if(!*a)
		printf("\n");
	else{
		printf("| %c |", *a);
		print_array(a + 1);
	}
}


void swap(char *s1, char *s2){
	char temp;
	temp = *s2;
	*s2 = *s1;
	*s1 = temp;
}

int strlen2(char *s){
	if(!*s)
		return 0;
	else
		return 1 + strlen2(s + 1);
}





