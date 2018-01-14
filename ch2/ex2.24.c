/* Exercise 2.24
 *
 * The function rand() returns values in the interval [0, RAND_MAX]. (See exercise 20,
 * on page 101.) If we declare the variable medi an of type double and initialize 
 * it to have the value RAND_MAX/2 .0, then rand() will return a value that is 
 * sometimes
 * larger than median and sometimes smaller. On average, there should be as many
 * values that are larger as there are values that are smaller. Test this hypothesis.
 * Write a program that calls rand(), say 500 times, inside a for loop, increments the
 * variable above_cnt every time rand() returns a value larger than medi an, and
 * increments the variable below_cnt every time rand() returns a value less than
 * medi an. Each time through the for loop, print out the value of the difference of
 * above_cnt and bel ow_cnt. This difference should oscillate about zero. Does it?
 *
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[]){
	double median = RAND_MAX / 2.0;
	int i = 0,  above_cnt = 0, below_cnt = 0;
	int val;
	
	srand(time(NULL));
	printf("\n");
	
	for(; i < 500; ++i){
		val = rand();
		if(val <= median)
			++below_cnt;
		else
			++above_cnt;
		printf("%d ", abs(above_cnt - below_cnt));
	}
	printf("\n\n");

	printf("%15s%d%15s%d", "above median:", above_cnt,
			       "\nbelow median:", below_cnt);
	printf("\n");
	return 0;
}






