/* Exerxise 4.13
 *
 * Write a program that reads in an integer value for n and then 
 * sums the integers
 * from n to 2 * n if n is nonnegative, or from 2 * n to n if n 
 * is negative. Write the
 * code in two versions, one using only for loops and the other 
 * using only while loops.
 *
 */

#include<stdio.h>

int main(void){
	int n, i = 1, sum = 0;
	scanf("%d", &n);
	int m = n;

	if(n >= 0){
		for(; m <= 2 * n; m++ )
			sum += m;
		printf("\nFor sum is %d\n", sum);
		
		sum = 0; m = n;
		while(m <= 2 * n)
			sum += m++;
		printf("\nWhile sum is %d\n", sum);
	}
	else{	
		m = 2 * n;
		for(; m <= n; m++ )
			sum += m;
	        printf("\nFor sum is %d\n", sum);
	 
	 	sum = 0; m = n * 2;
	 	while(m <= n)
                        sum += m++;
                printf("\nWhile sum is %d\n", sum);
	}
	return 0;
}

