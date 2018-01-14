/* Exercise 5.7
 *
 * Use the function probabity that we wrote in Section 5.12, "Static External
 * Variables," on page 222, to create two files, one with 100 random numbers and the
 * other with 1000 random numbers. All the numbers will lie in the range from 0 to 1.
 * If the numbers are truly randomly distributed, then we expect the average to
 * approximate 0.5 as we look at larger and larger sets of them. Compute the average
 * of the numbers in each of your files. Typically, the average of the numbers in the
 * larger file will be closer to 0.5 than the average of the numbers in the smaller file. Is
 * it?
 */ 

#define INITIAL_SEED 17	
#define MULTIPLIER 25173
#define INCREMENT 13849
#define MODULUS 65536
#define FLOATING_MODULUS 65536.0
#include<stdio.h>

static unsigned seed = INITIAL_SEED;
static double avg = 0.0;
double n = 0.0;
int cnt = 0;

	unsigned random(void){
		seed = (MULTIPLIER * seed + INCREMENT) % MODULUS;
		return seed;
	}

	double probability(void){
		seed = (MULTIPLIER * seed + INCREMENT) % MODULUS;
		return (seed / FLOATING_MODULUS);
	}

	double mean(void){
		scanf("%lf", &n);
		return ((avg += n) / ++cnt);
	}

