/* Exercise 5.6
 *
 * In this exercise we want to experiment with an assertion. [...]
 *
 */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int a, b, cnt = 0, i;

	srand(time(NULL));
	
	printf("\nThe function is most likely to fail for values of b <= 3. Since 1 <= a <= 3\n"
		"the condition (b - a <= 1) is more easily missed for small values of b.\n"
		"The assert branch is more likely taken. For every value of b >= 6 assert is\n"
	        "taken. The bottleneck of the function is the if statement.\n\n"
		"I was wrong. Few tests reveal how the real bottleneck was actually the\n"
		"asserion branch. The if statement  I heve never seen more than 70 iterations.\n"
		"More frequently, they are less than 20. Surprisingly, untin now, (20 runs ca.),\n"
		"has alway been the assertion to fail.\n"
	        "(b - a <= 1) significa (1 <= b <= 30) - (1 <= a <= 3) <= 1:\n"
		"1 - (1 v 2 v 3) <= 1; 2 - (1 v 2 v 3) <= 1; 3 - (2 v 3) <= 1; 4 - 3 <= 1;\n\n"	
		"(b - a > 2)  significa (1 <= b <= 30) - (1 <= a <= 3) > 2\n"
		"(6+) - 3 > 2;  (5+) - 2 > 2; (4+) - 1 > 2\n\n"   
		);
	
		for(i = 0; i < 1000; ++i){
	                a = rand() % 3 + 1;
	                b = rand() % 30 + 1;
	                if(b - a <= 1)
	                        continue;
	                assert(b - a > 2);
	                printf("%3d\n", ++cnt);
	        }
	        return 0;

}


