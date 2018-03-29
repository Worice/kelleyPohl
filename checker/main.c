/* Word checkier */
#include "prot.h"

int main(int argc, char *argv[]){

	FILE *inp = fopen(argv[1], "r");
	char *test = argv[2];		/*word to look for*/
	char working_area[WORK_DIM] = {'\0'};		
	char c;
	int line_counter = 0;

	while((c = fgetc(inp)) != EOF){
		int i = 0;
		count_line(c == '\n', &line_counter);
		if(!(isspace(c)) )
			working_area[i++] = c;
		else{
			if(match(test, working_area))
				printf("true - line: %d\n", line_counter);
			clean_array(working_area, WORK_DIM);
			i = 0;
		}
	}

	return 0;
}



