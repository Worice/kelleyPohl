/* Exercise 2.29
 *
 * In ANSI C, a backslash at the end of any line is supposed to have the effect of 
 * continuing it to the next line. This can be expected to work in string constants 
 * and
 * macro definitions on any C compiler, either ANSI or traditional. (See the previous
 * exercise.) However, not all ANSI C compilers support this in a more general way.
 * After all, except in macro definitions, this construct gets little use. Does your C
 * compiler support this in a general way? Try the following:
 * 
 * 	#inc\
 * 	lude <stdio.h>
 *
 * 	int mai\
 * 	nevoid)
 * 	{
 * 		printf("Will this work?\n");
 * 		ret\
 * 	urn 0;
 * 	}
 *
 */

#include<stdio.h>

int main(int argc, char *argv[]){
	printf("\n The program:\n\n"
		"#inc\\\n"
		"lude <stdio.h>\n"
		"\tint mai\\\n"
		"\tn(void)\n"
		"{\n"
        	"\t\tprintf(\"Will this work?\\n\");\n"
		"\tret\\\n"
		"\turn 0;\n"
		"}");
	printf("\n\ndoes not work!\n\n");
	return 0;
}
