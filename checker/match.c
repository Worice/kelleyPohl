/* Function that, given an input string, check if a second string is equal */
#include "prot.h"


int match(char *input, char *test){
	int i = 0, out = 1;
	while(out && *(test + i)){
		out = (*(input + i) == *(test + i));
		++i;}
	return out;
}
		
