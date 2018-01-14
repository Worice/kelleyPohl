/* Exercise 2.8 
 * The ANSI C committee is conSidering adding the c++ comment style to 
 * the C language, and some compilers already accept this. If you put 
 * a line such as
 *
 * // Will this c++ style comment work in C?
 * 
 * in one of your working C programs, what happens on your system? Even 
 * if your C compiler does accept this comment style, you should be 
 * aware that many compilers do not. If you want your code to be 
 * portable, do not use C++ style comments.
 *
 */

#include<stdio.h>

int main(int argc, char *argv[]){
	printf("\nThis kind of comments:\n"
		"\\\\ c++ style\n"
	       	"actually works on my gcc compiler. Anyway, it\n"
	        "is better, in terms of portability, to use the\n"
	        "classic C /*comment*/ style.\n\n");
	return 0;
}








