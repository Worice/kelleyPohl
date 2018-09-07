/* Esame 01 giugno 2016, esercizio 1 */

#include<stdio.h>
#include<stdlib.h>

int main(){

	char *s = "abete rosso";
	int rep; int *p_rep = &rep;

	char ripetizioni(char *s, int *rep){
		char out;
		char temp;
		int i, j, equals = 1, size = 0;

		for(i = 0; s[i]; ++i){
			temp = s[i];
			for(j = i + 1; s[j]; ++j)
				if(temp == s[j])
					++equals;
			if(equals > size){
				size = equals;
				out = temp;
			}
			else
				equals = 1;
		}
		*rep = size;
		return out;
	}

	char c = ripetizioni(s, p_rep);
	printf("Ripetizioni di %c: %d\n", c, rep);


	return 0;
}
