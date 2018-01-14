/* Exercise 4.8
 *
 * What gets printed?
 *
 * printf("%d %d %d\n", e == 'a', e == 'b', e != 'e');
 * printf("%d\n", e == 'A' && e <= 'B' II 'C');
 * printf("%d\n", 1 != !!e == !! Ie);
 * printf("%d\n", x + y > x - y);
 *
 */

#include<stdio.h>

int main(int argc, char *argv[]){

	char 	c = 'A';
	double	x = 1e+33, y = 0.001;

	printf("\nThe first line\n"
		"\t\"printf(\"%%d %%d %%d\", c == 'a', c == 'b', c != 'c')\"\n"
		"returns 0, 0 and 1.\nHere it is:\n");
	printf("%d %d %d\n", c == 'a', c == 'b', c != 'e');
	
	printf("\nThe second line\n"
		"\t\"printf(\"%%d\", c == 'A' && c <= 'B' || 'C');\n"
		"returns 1. Here it is:\n");
	printf("%d\n", c == 'A' && c <= 'B' || 'C');

	printf("\nThe third line\n"
		"\t\"printf(\"%%d\", 1 != !!c == !!!c)\"\n"
		"returns 1. As we can see:\n");
	printf("%d\n", 1 != !!c == !!!c);
	
	printf("\nThe fourth line:\n"
		"\t\"printf(\"%%d\", x + y > x - y)\"\n"
		"could return 0, since a number that big could not\n"
		"be entirely represented on a machine. Let's see:\n");
	printf("%d\n", x + y > x - y);

	return 0;
}
