/* Exercise 4.6
 *
 * What gets printed?
 *
 * 	char e = 'A';
 * 	int i = 5, j = 10;
 *
 * 	printf("%d %d %d\n", !c, !!c, !!!c);
 * 	printf ("%d %d %d\n", - ! i, ! - i, ! - i - ! j);
 * 	printf("%d %d %d\n", ! (6 * j + i - c), ! i-5, ! j - 10);
 *
 */

#include<stdio.h>

int main(int argc, char *argv[]){

	char c = 'A';
	int i = 5, j = 10;

	printf("\nI think that \"printf(\"%%d %%d %%d\",\n" 
		"!c, !!c, !!!c);\" will print 1, 0 and 1,\n"
		"because chars are short 8bits integers\n"
		"here printed with the %%decimal specifier:\n"); 
	printf("%d %d %d\n", !c, !!c, !!!c);

	printf("\nI think that \"printf(\"%%d %%d %%d\",\n"
		"- ! i, ! - i, ! - i - ! j);\"\n" 
		"will print 0, 0 and 0\n");
	printf("%d %d %d\n", - ! i, ! - i, ! - i - ! j);

	printf("\nI think that \"printf(\"%%d %%d %%d\",\n"
                "!(6 * j + i - c), ! i - 5, ! j - 10);\"\n"
                "will print 1, -5, -10 \n");
	printf("%d %d %d\n", ! (6 * j + i - c), ! i-5, ! j - 10);
	return 0;
}
