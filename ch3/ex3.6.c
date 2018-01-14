/* Exercise 3.6
 *
 * What happens when the arithmetic overflows? Try the following 
 * code on your system:
 *
 * 	int big_big = 2000000000 + 2000000000;
 *      printf("%d      %u\n", big_big, big_big);
 *
 * If you are working on a machine with a 2-byte int, 
 * change 2000000000 to 32000. What gets printed? Explain. Does 
 * the output change if big_big is declared to be
 * unsigned instead of int?
 * */ 

#include<stdio.h>
int main(void){
	int big_big = 2000000000 + 2000000000;
	unsigned int big_big_u = 2000000000 + 2000000000;
	printf("\n%d	%u\n", big_big, big_big);
	printf("When big_big is int, we have an integer overflow,\n"
		"demonstrated by the negative result. The most\n"
		"significative bit of the word is invaded. As\n"
		"unsigned, big_big can be correctly represented.\n");
	printf("\n%d      %u\n", big_big_u, big_big_u);
	printf("\nWhen big_big_u is printed as int, we have an\n" 
		"integer overflow, demonstrated by the negative\n" 
		"result. The most significative bit of the word\n" 
		"is invaded. As unsigned, big_big_u can be\n" 
		"correctly represented.\n");
}
