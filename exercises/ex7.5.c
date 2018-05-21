/* Exercise 7.5 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	char *s;
	char c;
	int i = 0;

	while(c != '\n'){
		scanf("%c", &c);
		if(c == ' ')
			s[i] = ' ';
		else
			s[i] = c;
		++i;
	}

	*(s + i + 1) = '\0';

	void print_string(char *s){
		if(*s != '\0'){
			printf("%c", *s);
			print_string(s + 1);
		}
	}

	int count_words(char *s){
		if(*s != '\0'){
			if(*s == ' ')
				return 1 + count_words(s + 1);
			else
				count_words(s + 1);
		}
	}

	print_string(s);
	printf("There are %d words!\n", count_words(s) + 1);
	return 0;
}
