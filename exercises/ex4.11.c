/* Exercise Tempesta 4.11 */

#include<stdio.h>
#include<stdlib.h>

char *justify(char *, int);
void print_string(char *);
/* MAIN */

int main(){
	char *s = "hello bei butei";
	print_string(s);
	char *q = justify(s, 30);
	printf("%s\n", q);
	print_string(q);

	free(q);
	return 0;
}

/* AUX */

char * justify(char *s, int new_len){
	int now_len; int sep = 0; int add, old_len, excess;
	int i, j, k;
	char *new_s;
	
	for(i = 0; s[i] != '\0'; ++i)
		if(s[i] == ' ')
			++sep;
	printf("len = %d\n", i);
	now_len = 1 + i;
	add = (new_len - now_len) / sep;
	excess = (new_len - now_len) % sep;
	
	new_s = (char *) malloc((new_len + 1) * sizeof(char));
	
	for(i = 0, j = 0; s[i] != '\0';  i++){
		new_s[j] = s[i];
			++j;	
		if(s[i] == ' '){
			for(k = 0; k < add; ++k){
				new_s[j] = ' ';
				j++;
			}
			if(excess > 0){
				new_s[j] = ' ';
				j++;
				--excess;
			}
		}

	}
	new_s[j] = '\0';
	return new_s;
}

			
		
void print_string(char *s){
	if(*s == '\0')
		printf("\n");
	else{
		printf("%c", s[0]);
		print_string(s + 1);
	}
}









