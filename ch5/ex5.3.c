/* Exercise 5.3
 *
 * What gets printed? Explain.
 *
 * int z;
 *
 * void f(int x){
 *         x = 2;
 *         z += x;
 * }       
 *
 * int main(void){
 *         z = 5;
 *         f(z);
 *         printf("z = %d\n", z);
 *         return 0;
 * } 
 */

#include<stdio.h>
void f(int x);
int z;

int main(void){
	printf("\nThe program\n"
			"\t#include <stdio.h>\n\n"
			"\tint z;\n\n"
			"\tvoid f(int x){\n"
			"\t\tx = 2;\n"
			"\t\tz += x;\n"
			"\t}\n\n"
			"\tint main(void){\n"
			"\t\tz = 5;\n"
			"\t\tf(z);\n"
			"\t\tprintf(\"z = %%d\\n\", z);\n"
			"\t\treturn 0;\n"
			"\t}\n");
	z = 5;
	f(z);
	printf("\nreturns:\n");
	printf("\tz = %d\n", z);
	printf("\nz is declared as extern variable. In main, z gets the value 5.\n"
		"The function \"f\" takes an input and changes it. In this case, the\n"
		"input z (5) becomes 2 and it is assigned to x. Than x is summed to z.\n"
	        "Since z is not declared nor in void neither in main, the value of\n"
		"z += x, where z is an extern variable visible to every function,  becomes 7\n\n");	
	return 0;
}

void f(int x){

	x = 2;
	z += x;
}






