/* Exercise 4.26
 *
 * Write a program to check the proper pairing of braces. Your program should have
 * two variables: one to keep track of left braces, say left_cnt, and the other to keep
 * track of right braces, say right_cnt. Both variables should be initialized to zero.
 * Your program should read and print each character in the input file. The appropri-
 * ate variable should be incremented each time a brace is encountered. If right_cnt
 * ever exceeds the value of left_cnt, your program should insert the character pair
 * ?? at that point in the output. After all the characters in the input file have been
 * processed, the two variables left_cnt and right_cnt should have the same value.
 * If not, and left_cnt is larger than right_cnt, then a message should be printed
 * that includes the number of right braces missing as a series of that many }'s. For
 * example,
 *
 * 	ERROR: Missing right braces: }}}
 *
 * Use the macros getchar() and putchar() for input/output. Test your program by
 * processing some files containing your own C code.
 *
 */

#include<stdio.h>

int main(void){
	int c;
	int rx_brack = 0, lx_brack = 0;

	while((c = getchar()) != EOF){
		if(c == '{'){
			++lx_brack; 
			putchar(c);
		}
		else if(c == '}'){
			++rx_brack;
			if(rx_brack > lx_brack)
				putchar('?'), putchar('?');
		}
		else
			putchar(c);

	}
	if(rx_brack < lx_brack){
		printf("\n\nERROR: Missing right braces: ");
		while(rx_brack - lx_brack != 0){
			putchar('}');
			++rx_brack;
		}
	}

	return 0;
}






