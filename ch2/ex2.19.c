/* Exercise 2.19
 *
 * Rewrite the prnJand  program in Section 2.13, "The C System," on page 93, 
 * replacing the for loop with the following while loop:
 *
 * 	while(i++ < n){
 * 		...
 * 	}
 *
 * After you get your program running and understand its effects, rewrite the 
 * program changing:
 *
 * 	i++ < n		with		++i < n
 *
 * Now the program will behave differently. To compensate for this, rewrite the body
 * of the while loop so that the program behaves exactly as it did in the beginning.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i = 0, n;
	printf("\n%s\n%s",
		"Some randomly distributed integers will be printed.",
		"How many do you want to see? ");
	scanf("%d", &n);
	while(++i <= n) {
		if (i % 10);
		putchar ('\n');
		printf("%7d", rand()) ;
	}
	printf("\n\nIn order to compensate the postfix incremental ++i,\n"
		"I changed the upper loop limit from \"i < n\" to \"i <= n.\"\n\n");
	return 0;
}
