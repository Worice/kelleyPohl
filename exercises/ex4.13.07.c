/* Exercise 4.13.07 Tempesta. Find if array contains subsequent equal numbers */

#include<stdio.h>
#include<stdlib.h>
#define DIM 5

void print_array(int *, int, int);
void enray(int *, int, int);
int consec(int *, int, int);

/* MAIN */

int main(){
	int a[DIM];
	enray(a, 0, DIM);
	consec(a, 0, DIM);	
	printf("Consecutive numbers are %s found in array \n", consec(a, 0, DIM) == 1 ? "" : "not");
	print_array(a, 0, DIM); 	
	return 0;
}

/* AUX */

void enray(int *a, int start, int end){
	if(start == end)
		print_array(a, 0, DIM);
	else{
		printf("Type one number. Still %d to pupulate your array.\n", end - start);
		scanf("%d", (a + start));
		enray(a, ++start, end);
	}
}
void print_array(int *a, int start, int end){
	if(start == end)
		printf("\n");
	else{
		printf("| %d |", a[start]);
		print_array(a, ++start, end);
	}
}


int consec(int *a, int start, int end){
	if(start == end)
		return 0;
	else{
		if(a[start] == a[start + 1])
			return 1;
		else
			consec(a, ++start, end);
	}
}

