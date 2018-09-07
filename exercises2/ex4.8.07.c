/* Exercise Tempesta 4.8 Longest sequence - 3
Write a function that takes as input a non-empty array of integers and its size and computes the
index of the longest sequence of consecutive, decreasing numbers in the array. In case of multiple
sequences with the same length, return the index of the one that appears first. */

#include<stdio.h>
#include<stdlib.h>
#define DIM 5 

/* MAIN */

int main(){
	int a[DIM] = {6, 5, 4, 3, 1};

	int longest(int *a, int end){
		int i, j, temp = 1, size = 1, decreasing, index = 0;
		for(i = 0; i < end - 1; i++){
			for(j = i + 1, decreasing = 1; decreasing && j < end; j++){

				if(a[i] < a[j]){
					++temp;
					++i; ++j;
				}
				else
					decreasing = 0;
			}
			if(temp > size){
				index = j - temp + 1;
				size = temp;
				temp = 1;
			}
		}
		return index;
	}
	
	printf("Index: %d\n", longest(a, DIM));

	return 0;
}
