/* Exercise 4.6.07 Longest sequence - 1
Write a function that takes as input a non-empty array of integers and its size and computes the
index of the longest sequence of consecutive, increasing numbers in the array. In case of multiple
sequences with the same length, return the index of the one that appears first.*/

#include<stdio.h>
#include<stdlib.h>
#define DIM 10 

void print_array(int *, int, int);

/* MAIN */

int main(){
	int a[DIM] = {1, 1, 2, 2, 2, 3, 3, 3, 3, 3};
	print_array(a, 0, DIM);
	
	int *longest(int *a, int end){
		int i, j, size = 0, temp = 1, equals = 1;
		int *index;
		for(i = 0; i < end; ++end){
			for(j = i + 1, equals = 1; equals && j < end; ++j){
				if(a[i] == a[j])
					++temp;
				else
					equals = 0;
			}		
			if(temp > size){
				size = temp;
				temp = 1;
				index = a + i;
				i = j;
			}
		}
		return index;
	}
	
	int *p = longest(a, DIM);	
	printf("Value at head of longest sequence: %d\n", *p);
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






