/* Exercise 3.24
 *
 * Write a program called try_me that contains the following lines:
 *
 * 	int c;
 * 	float x = 1.0, y = 2.0;
 *
 *	while ((c = getchar()) != EOF)
 *      	putchar(c);
 *
 * Create a small text file, say infile, and give the command
 *
 * 	try_me < infile > outfile
 *
 * to copy the contents of infile to outfile. (Make sure that you actually look 
 * at what is in outfile.) Is there any text that you can put into infile that 
 * will not get copied to outfile'? What about EOF, or the value of EOF, which is 
 * typically -1? Do these cause a problem? Explain.
 *
 * The whole output of the program goes to the outout.txt file. In any case, the 
 * program copies the whole input correctly. The EOL value, since equals -1, cannot 
 * be translated according to the ASCII table, that ranges from 0 to 255.
 *
 */

#include<stdio.h>

int main(void){
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);

	printf("\nMy theories an thoughts!\n\n");
	return 0;
}






