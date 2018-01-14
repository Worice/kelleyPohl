/* Exercise 2.26
 *
 * The value of expressions such as ++a + a++ and a += ++a are system-dependent,
 * because the side effects of the increment operator ++ can take place at different
 * times. This is both a strength and a weakness of C. On the one hand, compilers can
 * do what is natural at the machine leveL On the other hand, because such an expres-
 * sion is system-dependent, the expression will have different values on different
 * machines. Experienced C programmers recognize expressions such as this to be
 * potentially dangerous and do not use them. Experiment with your machine to see
 * what value is produced by ++a + a++ after a has been initialized to zero. Unfortu-
 * nately, many compilers do not warn about the danger of such expressions. What
 * happens on your system?
 *
 */

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	int a = 0;
	printf("\n%s%d\n", "++a + a++ = ", ++a + a++);
	printf("\nThe compiler throws a warning:\n"
		"\"operation on ‘a’ may be undefined\"\n");
	return 0;
}
