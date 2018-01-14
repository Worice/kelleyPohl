/* Exercise 4.12
 *
 * In Section 4.8, "The while Statement," on page 163, we said that if n has a negative
 * value, then
 *
 * 	while (--n)
 *		....		// do something 
 *
 * is an infinite loop. Actually, this is system dependent. Can you explain why?
 *
 */ 

#include<stdio.h>

int main(int argc, char *argv[]){

	short n;
	scanf("%hd", &n);

	while(--n)
		printf("\nHello%hd!", n);

	printf("\nRather than infinite, the loop is just very large. Since it depends on n\n"
		"decreasing, it will stop when n will no more be representable on the system.\n"
		"In our case, the system will cause the loop to stop at %hd.\n"
		"The number is small cause I had no time to wait the full loop,\n"
		"hence I used a short.\n\n", n);

	return 0;
}
