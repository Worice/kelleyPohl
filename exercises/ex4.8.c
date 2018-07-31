/* Exercise Tempesta 4.8 */

#include<stdio.h>
#include<stdlib.h>

char * longest_sequence(char *);

/* MAIN */

int main(){
	char *s = "aaabbbb";
	printf("hello\n");
	char *p = longest_sequence(s);
	printf("hello\n");
	printf("pointer char = %c", *p);	
	return 0;
}

/* AUX */

char * longest_sequence(char *s){
	int index;
	int max = 0;
	int temp, i;
	for(i = 0; s[i] != '\0'; ++i){
		temp = 1;
		while(s[i + temp] != '\0' && s[i] + temp == s[i + temp])
			++temp;
			if(temp > max){
			max = temp;
			index = i;
			}
		i += temp;
	}

	return s + index;
}

	

