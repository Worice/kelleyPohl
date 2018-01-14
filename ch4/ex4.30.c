/* Exercise 4.30
 *
 * Show how a while statement can be rewritten as a goto statement and an if state-
 * ment. Which is the better construct, and why?
 *
 */

#include<stdio.h>

int main(void){
	int n = 0, i = 0, j = 0;
	while(n < 1){
		printf("\nType a positive integer:\n");
		scanf("%d", &n);
	}

	while(++i < n)
		printf("\nNo error! ");
	printf("\nWHILE ERROR! ");


error: {
	       printf("\nGOTO ERROR! ");
}
	if (++j >= n)
		goto error;
	printf("\nThe goto statement makes the code less readable. The control flow is harder\n"
		"to detect.\n\n");

}
