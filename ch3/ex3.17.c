/* Exercise 3.17
 *
 * On a 24-hour clock, the zero hour is midnight, and the 23rd hour is 11 o'clock 
 * at night, one hour before midnight. On such a clock, when 1 is added to 23, we 
 * do not get 24, but instead we get O. There is no 24. In a similar fashion, 22 
 * plus 5 yields 3, because 22 plus 2 is 0 and 3 more is 3. This is an example of 
 * modular arithmetic, or more precisely, of arithmetic modulo 24. Most machines 
 * do modular arithmetic on all the integral types. This is most easily illustrated 
 * with the unsigned types. Run the following program and explain what gets printed:
 *
 *
 *
 */

#include <limits.h>
#include <stdio.h>
int main(void){
	int i;
	unsigned u = UINT_MAX;		/* typically 4294967295 or 65535 */

	for (i = 0; i < 10; ++i)
		printf("%u + %d = %u\n", u, i, u + i);
	for (i = 0; i < 10; ++i)
		printf("%u * %d = %u\n", u, i, u * i);

	printf("\nIt is similar to the concept of a N based system. On my machine\n"
		"the maxinum unsigned integer is 4294967295. According to the\n"
		"24-hours clock example, 429496729 is 24. That is, 24 is 0, and\n"
		"4294967295 is zero. Because of that, zero + 2 equals two. The same\n"			"for the multiplication. Since the last valid value of the\n"
		"numeric system is N - 1, each N * m multiplication results in\n"
		"\"N * m = N - m\".\n\n");

	return 0;
}
