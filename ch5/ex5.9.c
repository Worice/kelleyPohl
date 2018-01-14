/* Experiment with the tbLof_powers program presented in Section 5.4, "An Example:
 * Creating a Table of Powers," on page 203. How many rows of the table can you com-
 * pute before the powers that are printed become incorrect? Where appropriate, try
 * using the type double. Can you get larger numbers this way?
 */

#include<stdio.h>

#define N 50	

long 	power(int, int);
void 	prn_heading(void);
void 	prn_tbl_of_powers(int);
void	prn_comment(void);

int main(void){
	prn_heading();
	prn_tbl_of_powers(N);
	prn_comment();
	return 0;
}

void prn_heading(void)
{
	printf("\n:::::A TABLE OF POWERS::::: \n\n");
}

void prn_tbl_of_powers(int n){
	int i, j;
	for (i = 1; i <= n; ++i){
		for (j = 1; j <= n; ++j)
			if (j == 1)
				printf("%lu", power(i, j));
			else
				printf("%30lu", power(i, j));
	putchar('\n');
	}
}

long power(int m, int n){
	int 	i;
	long	product = 1;

	for(i = 1; i <= n; ++i)
		product *= m;
	return product;
}

void prn_comment(void){
	printf("\n\nThe normal application of the program allows correctly print\n"
		"seven rows of results.\n"
		"The result is correct up to 13. Later, an overflow accours, returning negative numbers.\n"
		"By returning long unsigned, the results appears to be plausible up to 40, where zeros appears.\n"
		"I would expect long unsigned to return small numbers once the while register is set to 1.\n"
		"Is zero a response given by the compiler when it detect an unsigned overflow? I suggets this hypothesis\n"
		"because, in any case, a valid number should be returned. But then it does noe explain why it does not\n"
		"appear with numbers bigger than 40.\n\n");
}
