/*Exercise 2.25
 * In this exercise we continue with the discussion started in exercise 20, on 
 * page 101.
 * A call to rand() produces a value in the interval [0, RANDJ1AX], and RAND_MAX 
 * typically has the value 32767. Since this value is rather small, rand() is not 
 * useful for scientific problems. Most C systems on UNIX machines provide the 
 * programmer with the rand48 family of random-number generators, so called because 
 * 48-bits arithmetics gets used to generate the numbers. The function drand48(), 
 * for example, can be used to produce randomly distributed doubles in the 
 * range [0, 1], and function lrand48() can be used to produce randomly distributed 
 * integers in range [0, 2^31 - 1]. Typically, the function prototypes for this 
 * family of functions is in stdlib.h. Modify the program that you wrote in exercise 
 * 20, on page 101, to use  lrand48() in place of rand() and srand48() in place of 
 * srand(). You will see that, on average, larger numbers are generated. Whether 
 * the numbers are better depends on the application. To find out more about 
 * pseudo random-number generators, consult the text Numerical Recipes in C by 
 * William Press et al. (Cambridge, University Press, 1992), pages 274-328.
 */


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[]){
	int i, val, val48;
        printf("\nThe RAND_MAX value on this system is %d.\n\n", RAND_MAX);
        srand(time(NULL));
	srand48(time(NULL));
	printf("\nIteration	rand()		lrand48()\n");
	for(i = 0; i < 10; ++i){
		val = rand();
		val48 = lrand48();
		printf("%d\t\t%d\t%d\n", i, val, val48);
	}

	return 0;
}

