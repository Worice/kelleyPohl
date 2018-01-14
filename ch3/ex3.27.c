/* Exercise 3.27
 *
 * 	char c = 0xff;
 *      if(c == 0xff)
 *      	printf("Truth! \n");
 *      else
 *      	printf("This needs to be explained!\n");
 *
 *
 * The following code is machine-dependent. If when you execute the code it does the
 * unexpected, see if you can explain what is happening.
 *
 */

#include<stdio.h>

int main(int argc, char *argv[]){
	char c = 0xff;
	if(c == 0xff)
		printf("Truth! \n");
	else
		printf("This needs to be explained!\n"
			"most likely, a signed char can go up to 127,\n"
			"while 0xff is 255.\n\n");

}
