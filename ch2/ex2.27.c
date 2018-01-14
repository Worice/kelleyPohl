/* Exercise 2.27
 *
 * Libraries on a UNIX system typically end in .a, which is mnemonic for "archive"
 * whereas libraries in Win 95/NT systems typically end in .lib. See if you can 
 * find the standard  C libraries on your system. These libraries are not readable 
 * by humans.
 * On a UNIX system you can give a command such as:
 * 	ar t /usr/lib/libc.a
 * see all the titles (names) of the objects in the library. If you do not see any 
 * mathematical functions, then the mathematics library is probably in a separate 
 * file. 
 * Try command:
 *
 * 	ar t /usr/lib/libm.a
 *
 */

#include<stdio.h>

int main(int argc, char *argv[]){
	printf("\nNothing appears. I am working on a VM. May this\n"
		"constitute a problem?\n");
	return 0;
}

