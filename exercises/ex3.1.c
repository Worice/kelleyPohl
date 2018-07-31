/* Exercise 3.1 */

#include<stdio.h>
int count_sequences(int, char, char);
int count(int);


/* MAIN */

int main(){
	printf("%d\n", count(3));
	return 0;
}

/* AUX */

int count_sequences(int n, char last, char prev){
	if(n == 0)
		return 1;
	else
		if(last == prev)
			return (last == 'r') ? count_sequences(n - 1, 'b', last) : count_sequences(n - 1, 'r', last);
		else
			return count_sequences(n - 1, 'r', last) + count_sequences(n - 1, 'b', last);
}	

int count(int n){
	return count_sequences(n, 'r', 'b');
}

