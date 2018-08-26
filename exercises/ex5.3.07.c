/* Exercises Tempesta 5.3.07 */

#include<stdio.h>
#include<stdio.h>

void upper(char *);
void print_string(char *);

/* MAIN */

int main(){
	char *s = "a";
	print_string(s);
	printf("ahah\n");
	upper(s);
	print_string(s);
	return 0;
}

/* AUX */

void upper(char *s){
	if(*s != '\0'){
		*s += 32;
		upper(s + 1);	
	}
}

void print_string(char *s){
	if(*s == '\0')
		printf("\n");
	else{
		printf("%d", s[0]);
		print_string(s + 1);
	}
}

