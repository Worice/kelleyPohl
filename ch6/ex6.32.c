/* Esercizio 6.32 */

#include<stdio.h>
#define W 1024
#define H 768
void print_multi_arr(int [1024][768]);


int main(){
	int a[1024][768] = {0};
	print_multi_arr((*a)[768]);
	return 0;

}

/****** AUX *****/

void print_multi_array(a[][768]){
	for(int i = 0; i < 1024; ++i){
		for(int j = 0; i < 768; ++j)
			printf("%d", a[i][j]);
		printf("\n");
	}	
}
