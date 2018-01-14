/* Exercise 5.10
 * 
 * In the tbLof_powers program in Section
 * "An Example: Creating a Table of Pow-
 * ers," on page 203, we wrote the function definition for main() first. What happens
 * if you remove the function prototypes and put main() last? Your compiler should
 * be happy with this new arrangement. Is it? What happens if you put maini() first
 * but do not include any function prototypes? Can you guess what your compiler will
 * complain about? One of our C compilers issues warnings but produces an execut
 * able file, whereas our C++ compiler issues errors and refuses to compile the code.
 * What happens on your system?
 */

#include<stdio.h>

#define N 7	

long 	power(int, int);
void 	prn_heading(void);
void 	prn_tbl_of_powers(int);
void	prn_comment(void);
void	ex_comments(void);


int main(void){			/*second: main first, no prototypes*/
	prn_heading();
	prn_tbl_of_powers(N);
	ex_comments();
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
				printf("%ld", power(i, j));
			else
				printf("%9ld", power(i, j));
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

void ex_comments(void){
	printf("\n\n- No prototypes, main() in last position:\n"
		"\timplicit declaration of function ‘power’ and 'prn_comment';\n"
		"\tthe types for 'power' conflict and thre are several implicit\n"
		"\tantecedent declarations.\n"
		"- Main first, no prototypes:\n"
		"\tWe got several warnings, type mysmatches and redundant\n"
	       	"\tfunction declarations. The program does not compile.\n\n");
	}


/*int main(void){			First case
        prn_heading();
        prn_tbl_of_powers(N);
        prn_comment();
	ex_comments();
        return 0;
}
*/

