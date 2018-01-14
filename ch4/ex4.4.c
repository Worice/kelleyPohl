/* Exercise 4.4
 *
 * Write a program that counts the number of times the first three letters of the 
 * alphabet (a, A, b, B, c, C) occur in a file. Do not distinguish between lower- 
 * and uppercase letters.
 *
 */

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

	char ch;
	int a = 0, b = 0, c = 0, other = 0;

	while((ch = getchar()) != EOF){
		if(ch == 'a' || ch == 'A')
			++a;
		else if(ch == 'b' || ch == 'B')
			++b;
		else if(ch == 'c' || ch == 'C')
			++c;
		else
			++other;
	}

	printf("\nApparences of a/A, b/B, c/C in a text:\n\n"
		"%10s%10s%10s%10s\n"
		"%10d%10d%10d%10d\n\n",
		"A-a", "B-b", "C-c", "Other",
		a, b, c, other);
	return 0;
}

