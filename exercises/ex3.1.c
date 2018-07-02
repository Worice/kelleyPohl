/* Exercise 3.1 */

#include<stdio.h>
int marbles(int, char, char);
int count(int);

/* AUX */

int main(){
	printf("Result: %d\n", count(3));	
	return 0;
}

/* AUX */

int marbles(int n, char last, char prev){
	if(n == 0)
		return 1;
	else{
		if(last == prev)
			return (last == 'R') ? marbles(n - 1, 'B', last) : marbles(n - 1, 'R', last); 
		else
			return marbles(n - 1, 'R', last) + marbles(n - 1, 'B', last);
	}
}

int count(int n){
	return marbles(n, 'R', 'B');
}

