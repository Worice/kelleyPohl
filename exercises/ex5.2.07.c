/* Exercise Tempesta 5.2.07 */

#include<stdio.h>
#include<stdlib.h>
int palin2(char *, char *);

/* MAIN */

int main(){
	char *s = {"ab$ba"};
	printf("%d\n", palin2(s, s + 4));
	return 0;
}

/* AUX */

int palin2(char *s1, char *s2){
	if(*s1 > *s2)
		return 1;
	else
		if((*s1 < 'A' && *s1 > 'Z') &&  (*s1 < 'a' && *s1 > 'z'))
			return palin2(s1 + 1, s2);
		else
			if((*s2 < 'A' && *s2 > 'Z') &&  (*s2 < 'a' && *s2 > 'z'))
				return palin2(s1, s2 - 1);
			else
				return (*s1 == *s2) && palin2(s1 + 1, s2 - 1);
}
					

