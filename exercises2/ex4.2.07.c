/* Tempesta 4.2.07. Given ordere array, eliminate duplicates */

#include<stdio.h>
#include<stdlib.h>
#define DIM 10 

void print_array(int *, int, int);
int count_dupl(int *, int, int);
void populate(int *, int, int, int*, int, int);
int count_diff(int *, int, int);
/* MAIN */

int main(){
	int a[DIM] = {2, 2, 3, 5, 5, 5, 6, 7, 8, 9};
	print_array(a, 0, DIM);
	
	int num = count_dupl(a, 0, DIM);
	printf("%d\n", num);

	int b[num];
	
	populate(b, 0, num, a, 0, DIM);

	print_array(b, 0, num);


	
	int num2 = count_diff(a, 0, DIM);
	printf("%d\n", num2);

		
	return 0;
}

/* AUX */

void print_array(int *a, int start, int end){
	if(start == end)
		printf("\n");
	else{
		printf("| %d |", a[start]);
		print_array(a, ++start, end);
	}
}


int count_dupl(int *a, int start, int end){
	if(start >= end)
		return 0;
	else{
		int i;
		for(i = 1; a[start] == a[start + i] && start + i < end; i++)
			printf("i: &d -> %d : %d\n", i, a[start], a[start + i]);
		return 1 + count_dupl(a, start + i, end);
	}
}

void populate(int *out, int start, int end, int *in, int startin, int endin){
	if(start < end){
		out[start] = in[startin];
		int i;
		for(i = 1; in[startin] == in[startin + i] && start + i < endin; ++i)
			printf("i: &d -> %d : %d\n", i, in[startin], in[startin + i]);
		populate(out, ++start, end, in, startin + i, endin);
	}
}

int count_diff(int *a, int start, int end){
	if(start == end)
		return 0;
	else{
		if(a[start] == a[start + 1])
			return count_diff(a, ++start, end);
		else
			return 1 + count_diff(a, ++start, end);
	}
}
