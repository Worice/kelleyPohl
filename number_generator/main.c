/* Random number generator */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[]){
	
	int i;
	int t;
	sscanf(argv[1], "%d", &t);

	srand((unsigned) time(NULL));

	for(i = 0; i < t; i++){
		if(i % 10 == 0)
			printf("\n");
		printf("%10d", rand() % 1000);
	}
	return 0;
}

