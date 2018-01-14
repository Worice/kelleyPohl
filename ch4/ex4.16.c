/* Exercise 4.16
 *
 *In Section 4.10, "An Example: Boolean Variables," on page 170, we presented a pro
 gram that prints a table of values for some boolean functions. Execute the program
and examine its output. For the 32 different inputs, exactly half of them (16 in num-
ber) have majority value 1. Write a program that prints a table of values for the
majority function for, say, 7 boolean variables. Of the 128 different inputs, how
many have majority value 1? State the general case as a theorem and try to give a
proof. (Your machine can help you find theorems by checking special cases, but in
general it cannot give a proof.)

*/

#include<stdio.h>

int main(int argc, char *argv[]){
	int b1, b2, b3, b4, b5, b6, b7;
	int cnt = 0, cnt_maj = 0;

	printf("\n%5s%5s%5s%5s%5s%5s%5s%5s%10s\n",
		"Cnt", "b1", "b2", "b3", "b4", "b5", "b6", "b7", "majority");

	for(b1 = 0; b1 < 2; ++b1)
	    for(b2 = 0; b2 < 2; ++b2)
		for(b3 = 0; b3 < 2; ++b3)
	            for(b4 = 0; b4 < 2; ++b4)
			for(b5 = 0; b5 < 2; ++b5)
			    for(b6 = 0; b6 < 2; ++b6)
				for(b7 = 0; b7 < 2; ++b7){
				    printf("\n%5d%5d%5d%5d%5d%5d%5d%5d%10d",
					++cnt, b1, b2, b3, b4, b5, b6, b7, 
					b1 + b2 + b3 + b4 + b5 + b6 + b7 >= 4);
				    if(b1 + b2 + b3 + b4 + b5 + b6 + b7 >= 4)
					    ++cnt_maj;
				}
	printf("\nMajority counts %d cases. Unfortunately, I do not kmow how to develop\n"
		"a theorem. It appears possible that majority occurs for half of the possible\n"
		"combinations.\n", cnt_maj);
	putchar('\n');

	return 0;
}
