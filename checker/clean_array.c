/* Function that clear the workspace */
#include "prot.h"

void clean_array(char *p, int rec){
	if(rec >= 0){
		p[rec - 1] = '\0';
		clean_array(p, rec - 1);
	}
}

