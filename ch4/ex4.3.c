/* Exercise 4.3
 *
 * Write a program that reads characters from the standard input file until EOF is
 * encountered. Use the variables digit_cnt and other_cnt to count the number of
 * digits and the number of other characters, respectively.
 *
 */

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	char c;
	int digit_cnt = 0, other_cnt = 0;

	while((c = getchar()) != EOF){
		if(c >= '0' && c <= '9')
			++digit_cnt;
		else
			++other_cnt;
	}
	printf("\n%10s%10s\n%10d%10d\n\n",
		"Digits", "Other",
		digit_cnt, other_cnt);
	return 0;
}

