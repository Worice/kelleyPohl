/* Exercise 3.16
 *
 * Let N_min_u_long and N_max_u_long represent the minimum and maximum values that
 * can be stored in an unsigned long on your system. What are those values? Hint:
 * Read the standard header file limits.h.
 *
 */

#include<stdio.h>
#include<limits.h>

int main(int argc, char *argv[]){
	unsigned long N_min_u_long = 0, N_max_u_long = 0;

	while(N_min_u_long <= 0)
		--N_min_u_long;
	printf("\nThe maximum unsigned long is %lu,\n"
		"while the minimum is zero!\n\n", N_min_u_long);

        return 0;
}

