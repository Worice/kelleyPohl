/* Exercise 2.3 
 *
 * print odd number up to 1000. New line every 10 
 *
 */

#include<stdio.h>

int main(){
	int i = 1;
	int top = 1;

	do{
		printf("%10d", top);
		if(i % 10 == 0)
			printf("\n");
		i++;
		top += 2;
	}while(top <= 1000);
	
	return 0;
}
