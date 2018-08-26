/* Exercise Tempesta 5.1 - Recursion */

#include<stdio.h>
#include<stdlib.h>

int palindrome(int *, int *, int *);

/* MAIN */

int main(){
	int a[6] = {0, 2, 3, 3, 2, 0};
	int count;
	int *pc = &count;
	printf("%d\n", (palindrome(a, a + 5, &count) == 1) ? 1 : 0);
	printf("zeroes: %d\n", count);
	printf("zeroes: %d\n", *pc);
	return 0;
}

/* AUX */ 

int palindrome(int *p1, int *p2, int *count){
	if(p1 > p2){
		*count = 0;
		return 1;
	}
	else if(p1 == p2){
		if(*p1 == 0)
			++(*count);
		return 1;
	}
	else{
		int r = palindrome(p1 + 1, p2 - 1, count);
		*count += (*p1 == 0) ? 1 : 0;
		*count += (*p2 == 0) ? 1 : 0;
		return r && (*p1 == *p2);
	}
}


void print_array(int *a, int start, int end){
	if(start == end)
		printf("\n");
	else{
		printf("%d ", a[start]);
		print_array(a, ++start, end);
	}
}


