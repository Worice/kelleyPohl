/*Exercise 4.11
 *
 * Can the following code ever lead to an infinite loop? Explain. 
 * (Assume that the values of i and j are not changed in the 
 * body of the loop.)
 *
 */


#include<stdio.h>

int main(void){

	int i, j, k = 0;

	printf("Input two integers: ");
	scanf("%d%d", &i, &j);
	while (i * j < 0 && ++i != 7 && j++ != 9) {
		printf("\nHello%d", ++k);	
	}
	printf("\n\nHere an infinite loop should be impossible\n"
		"because of the first condition. i XOR j must be\n"
		"negative, and since both of them will be\n"
		"incremented the \"!=\" condition will be violated\n"
		"by the negative one.\n\n");
	return 0;
}
