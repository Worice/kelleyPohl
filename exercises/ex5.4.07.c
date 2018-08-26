/* Exercise 5.4.07 Tempesta */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(char *, char *);
void permute(char *, char*);

/* MAIN */  

int main(){
	char s[3] = "ab";

	permute(s, s);
	
	return 0;
}

/* AUX */

void swap(char *s1, char *s2){
	char temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void permute(char *s, char *f){
	if(!*f)
		printf("%s\n", s);
	else{
		int l = strlen(f) - 1;
		int i;
		for(i = 0; i <= l; i++){
			swap(f, f + i);
			permute(s, f + 1);
			swap(f, f + i);
		}
	}
}







