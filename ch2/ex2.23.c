/* Exercise 2.23
 *
 * In the two previous exercises we used the value returned by time() to seed the 
 * random-number generator. In this exercise we want to use the value returned by
 * time() to measure the time it takes to call rand(). Here is one way this can be
 * done [see code below and the book for the output example]:
 * 
 * ...
 *
 * The intent of this program is to print out some of the values produced by the call to
 * rand 0 but not all of them. After all, looking at ten million numbers on the screen
 * is not too interesting. Experiment with this program by modifying some of the
 * #defi nes so that you can see what their effects are. For example, try making the
 * following changes:
 * 
 * 	#define NCALLS	1000
 * 	#define NCOLS	7
 * 	#define NROW	7
 *
Caution: If you are on a time-shared machine, then the use of values returned by
time() to time things can be misleading. Between your calls to time(), the
machine may be servicing other requests, making your timing results inaccurate.
The proper way to time C code is with the use of the clock() function. (See Section
11.16, "How to Time C Code," on page 528.)
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NCALLS	100
#define NCOLS	5	
#define NROWS	10	

int main(int argc, char *argv[]){

	int i, val;
	long begin, diff, end;
	begin = time(NULL);
	srand(time(NULL));
	printf("\nTIMING TEST: %d calls to rand()\n\n", NCALLS);
	for (i = 1; i <= NCALLS; ++i) {
		val = rand();
		if (i <= NCOLS * NROWS) {
			printf("%12d", val);
			if (i % NCOLS == 0)
				putchar('\n');
		}
		else if (i == NCOLS * NROWS + 1)
			printf("%7s\n\n", "....");
	}
	end = time(NULL);
	diff = end - begin;
	printf("%s%ld\n%s%ld\n%s%ld\n%s%.10f\n\n",
		"	   end time: ", end,
		"        begin time: ", begin,
		"      elapsed time: ", diff,
		"time for each call: ", (double) diff / NCALLS);
	return 0;
}






