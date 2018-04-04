/* Ex. 7.11
 *
 * write a bitprint for hexadecimal inputs
 *
 * */

#include<stdio.h>
#define SIZE ((int)(sizeof(unsigned)) * 8)
void hex_print(int *, int);

/* MAIN */


int main(){
	int input = 0;
	printf("int:\t %d\n", (int)sizeof(int));
	printf("float:\t %d\n", (int)sizeof(float));
	printf("short:\t %d\n", (int)sizeof(short));
	printf("double:\t %d\n", (int)sizeof(double));
	printf("Type an hexadecimal number wich binary form you do want to see:\n");
	scanf("%d", &input);
	printf("%#X\n", input);
	hex_print(&input, SIZE);
	return 0;
}

/* AUX */

void hex_print(int *n, int rec){
	int mask = 1;
	if(rec > 0){
		printf("%c", ((mask & *n) == 0) ? '0' : '1');
		*n >>= 1;
		if((rec - 1) % 4 == 0)
			printf(" ");
		hex_print(n, rec - 1);
	}
	else
		printf("\n");
}
		


















