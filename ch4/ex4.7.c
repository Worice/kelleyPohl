/* Exercise 4.7
 *
 * Explain the effect of the following code:
 *
 * 	int i;
 * 	.....
 * 	while (i = 2) {
 * 		printf("Some even numbers: %d %d %d\n", 
 * 			i, i + 2, i + 4);
 * 			i = 0;
 * 	}
 *
 * Contrast this code with the following:
 * 	
 * 	int i;
 * 	.....
 * 	if (i = 2)
 * 		printf("Some even numbers: %d %d %d\n", 
 * 		i, i + 2, i + 4);
 *
 * Both pieces of code are logically wrong. The run-time effect of 
 * one of them is so striking that the error is easy to spot, 
 * whereas the other piece of wrong code has a
 * subtle effect that is much harder to spot. Explain.
 *
 */ 

#include<stdio.h>

int main(int argc, char *argv[]){
	printf("\nThe code:\n"
		"\tint i;\n"
		"\t.....\n"
		"\twhile (i = 2) {\n"
			"\t\tprintf(\"Some even numbers: %%d %%d %%d,\n"
			"\t\t\ti, i + 2, i + 4);\n"
                	"\t\ti = 0;\n"
		"\t}\n"
		"presents few problems:\n\n"
		"1)\tI do not see the meaning of a while cycle for\n"
		"just a single iteration;\n"
		"2)\tWhy even bother ourselves with the creation\n"
		"of a cycle. The results, since they are\n"
		"requested only for i = 2, are already known.\n");
	
	printf("\nThe second code\n:"
			"\tint i;\n"
			"\t.....\n"
			"\tif(i = 2)\n"
				"\t\tprintf(\"Some even numbers:"
			       		"%%d %%d %%d\",\n"
				"\t\t\ti, i + 2, i + 4);\n\n"
		"Is more rational. In any case, as the first piece\n"
		"of code, it does not need to calculate the results.\n"
		"It could just print 2, 4 and 6.\n\n");
	
	
	return 0;

}
		

