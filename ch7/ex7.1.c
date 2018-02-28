/* Exercise 7.1 */

#include<stdio.h>

void bit_print(int);


int main(){
	int n = 0;
	printf("\nPlease type an integer. I will print its binary representation:\n");	
	scanf("%d", &n);
	bit_print(n);

	putchar('\n');
	return 0;
}


/**** AUX ****/

void bit_print(int n){
	int mask = 32768;
	if(n < 0){
		printf("%d", (n | mask) ? 1 : 0);
		mask >>= 1;
		for(int i = 14; i >= 0; --i){
			printf("%d", (n & mask) ? 1 : 0);
			mask >>= 1;	
			if(i % 4 == 0)
				printf(" ");
		}
	}
	else{
		for(int i = 15; i >= 0; --i){
			printf("%d", (n & mask) ? 1 : 0);
			mask >>= 1;	
			if(i % 4 == 0)
				printf(" ");
		}
	
	}	
}
