/* Exercise 2.21
 * Run the prnJand program in Section 2.13, "The C System," on page 93, three times
 * to print out, say, 100 randomly distributed integers. Observe that the same list of
 * numbers gets printed each time. For many applications, this is not desirable. 
 * Modify the prnJand program by using 5 rand 0 to seed the random-number generator.
 * first few lines of your program should look like
 *
 * #include <stdio.h>
 * #include <stdlib.h>
 * #include <time.h>
 *
 * int main(void){
 * 	int i, n, seed;
 * 	seed = time(NULL);
 * 	srand(seed);
 * 	printf("\n%s\n%s",
 *	 	"Some randomly distributed integers will be printed.",
 * 		"How many do you want to see? ");
 * }	
 *
 * On most C systems, the function call time(NULL) returns the number of elapsed
 * seconds since 1 January 1970. (See Appendix A, "The Standard Library.") We store
 * this value in the variable seed, and then we use the function call srand(seed) to
 * seed the random-number generator. Repeated calls to rand() will generate all the
 * integers in the interval [0, RAND_MAX], but in a mixed-up order. The value used to
 * seed the random-number generator determines where in the mixed-up order
 * rand() will start to generate numbers. If we use the value produced by time() as a
 * seed, then the seed will be different each time we call the program, causing a 
 * different set of numbers to be produced. Run this program repeatedly. You should 
 * see a different set of numbers printed each time. Do you?
 *
 */


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[]){

	int i, n;
	int seed = time(NULL);
	srand(seed);
	printf("\n%s\n%s",
		"Some randomly distributed integers will be printed.",
		"How many do you want to see? ");
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		if (i % 10 == 0)
			putchar ('\n');
		printf("%7d", rand());
	}
	printf("\n\n");
	return 0;
}
