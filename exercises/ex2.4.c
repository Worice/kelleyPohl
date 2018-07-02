/* Exercise 2.4 
 *
 * Flor-root of n
 *
 */

#include<stdio.h>

int main(){
	int n, r, i = 2, j, max = 0, tmp;
	printf("Number:\n");
	scanf("%d", &n);
	printf("Root:\n");
	scanf("%d", &r);

	do{
		tmp = i;
		for(j = r; j > 1; --j)
			tmp *= i;
		if(tmp <= n){
			max = tmp;
			++i;
		}
		else
			 printf("%d by %d^%d\n", max, (i - 1), r);
	}while(tmp <= n);

	return 0;
}

			

	

