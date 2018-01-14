/* Exercise 2.20
 *
 * The integers produced by the function rand 0 all fall within the interval [0, n],
 * where n is system-dependent. In ANSI C, the value for n is given by the symbolic
 * constant RAND_MAX, which is defined in the standard header file stdlib.h. Write a
 * program that prints out the value of RAND_MAX on your system. Hint: Include the
 * file stdlib.h and use the line:
 *
 * printf("RAND_MAX = %d\n", RAND_MAX);
 *
 * If possible, run your program on a number of different C systems. You will 
 * probably find that RAND_MAX has the same value on all systems. The reason for 
 * this is that the ANSI C committee suggested how the function rand() could be 
 * implemented, and most compiler writers followed the committee's suggestions 
 * verbatim.
 * It has been our experience that C systems on PCs, UNIX workstations, and even the
 * Cray supercomputer in San Diego all use the same value for RAND_MAX and that on
 * all of these systems rand() produces the same output values. (See exercise 25, on
 * page 105, for further discussion.)
 */

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	printf("\nThe RAND_MAX value on this system is %d.\n\n", RAND_MAX);
	return 0;
}
