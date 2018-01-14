/* Exercise 5.14
 *
 * A famous conjecture, called the Goldbach conjecture, says that every even integer n
 * greater than 2 has the property that it is the sum of two prime numbers. Computers
 * have been used extensively to test this conjecture. No counterexample has ever
 * been found. Write a program that will prove that the conjecture is true for all the
 * even integers between the symbolic constants START and FINISH. For example, if
 * you write
 *
 * [...]
 *
 * Hint: Use the function is_prime() that you wrote in exercise 11, on page 238.
 *
 * */

#include<stdio.h>
#define START 10000	
#define FINISH 10020 	
int is_prime(int);
void intro(void);

/* Main         *************************************/	

int main(){
	int i, j, k;	
	intro();
	for(i = START; i <= FINISH; i += 2){
		for(j = 2; j <= FINISH - 2; ++j){
			if(is_prime(j)){
				for(k = 2; k <= FINISH - j; ++k){
					if(is_prime(k) && j + k == i && i <= FINISH){
						       printf("%5d + %2d = %5d\n", 
							       j, k, i);
						       i += 2;
					}
		 		}
			}
		}
	}			
	return 0;
}


/* Functions     *************************************/

int is_prime(int n){
	int i = 2, flag = 1;
	while(flag && i < n){
		flag = n % i++;
	}		
	return flag;
}

void intro(void){
	printf("\nThe Goldbach conjecturs states that every even number bigger\n"
		"than 2 is the sum of two prime numbers. Let's see is that's \n"
		"true for the numbers between %d and %d.\n\n", START, FINISH);
}


