/* Exercise Tempesta 4.6 */

#include<stdio.h>
#include<stdlib.h>

void print_array(int *, int, int);
int longest_sequence(int *, int);
/* MAIN */

int main(){
	int a[8] = {1, 2, 0, 1, 2, 1, 4, 5};
	printf("longest = %d\n", longest_sequence(a, 8));

	return 0;
}

/* AUX */

int longest_sequence(int *a, int dim){
	int index = 0;
	int i, j;
	int temp, max = 1;
	for(i = 0; i < dim && j < dim; ++i){
		temp = 1;
		for(j = i + 1; j < dim; ++j){
			if(a[j - 1] < a[j]){
				++temp;
			}
			else{
				if(temp > max){
					index = i;
					max = temp;
				}
				i = j;
			}
		}
	}
	return index;
}





void print_array(int *a, int start, int end){
	if(start == end)
		printf("\n");
	else{
		printf("%d ", a[start]);
		print_array(a, ++start, end);
	}
}


