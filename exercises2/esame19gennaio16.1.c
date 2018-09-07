/* Esame 19 gennaio 2016, esercizio 1 */

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char *s = "aaabbcccccdddd";
	
	char *sequenza(char *s){
	       	int i, j, temp ;
       		int seq = 0, equal = 1, equals = 1;
		char *p = s;

		for(i = 0, equal = 1; s[i]; ++i){
			for(j = i; equal && s[j + 1]; ++j){
				if(s[j] == s[j + 1])
					++equals;
				else
					equal = 0;
			}
			if(equals > seq){
				seq = equals;
				equals = 1;
				p += i;
				i += j + 1;
			}
			equals = 1;
			equal = 1;
		}
		return p;
	}

	printf("%c\n", *(sequenza(s)));

	return 0;
}
