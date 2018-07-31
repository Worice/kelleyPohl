/* Exercise 4.7 Tempesta */

#include<stdio.h>
#include<stdlib.h>
int longest_sequence(char *);

/* MAIN */

int main(){

	char *s = "abcbcde";
	printf("index = %d\n", longest_sequence(s));
	return 0;
}

/* AUX */

int longest_sequence(char *s){
	int index = 0;
	int temp, max = 1;
	int i, j;
	for(i = 0; s[i] != '\0' && s[j] != '\0'; ++i){
		temp = 1;
		for(j = i + 1; s[j] != '\0'; ++j){
			if(s[j - 1] < s[j])
				++temp;
			else{
				if(temp > max){
					index = i;
					max = temp;
				}
				i += temp;
			}
		}
	}
	return index;
}

			

