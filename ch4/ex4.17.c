/* Exercise 4.17
 * 	for (cnt = 0, i = 1, j = 2; cnt < n; ++cnt, i += 2, j += 2)
 * 	odd_sum += i, even_sum += j;
 *
 * Note the prolific use of the comma operator. The code is not very good, but it will
 * give you confidence that the comma operator works as advertised. In the second
 * version, use one or more fo r statements but no comma operators. In the third ver-
 * sion, use only whi 1 e statements.
*/ 

#include<stdio.h>

int main(int argc, char *argv[]){
	int cnt, i = 1, j = 2, odd_sum = 0, even_sum = 0;
	int n;
	printf("\nPlease a number for how many odd and even numbers you want to sum:\n");
	scanf("%d", &n);
	
	for (cnt = 0, i = 1, j = 2; cnt < n; ++cnt, i += 2, j += 2) /*commas in single loop*/
		odd_sum += i, even_sum += j;
	printf("\n%10s%10s%10s\n",
		"N", "Odd", "Even");
	printf("%10d%10d%10d\n", n, odd_sum, even_sum);

	
	for(i = 1; ++cnt < n ; i += 2)			/*no commas, double loop*/	
		odd_sum += i;
	for(j = 2; ++cnt < n ; j += 2)
		even_sum += j;
	printf("%10d%10d%10d\n", n, odd_sum, even_sum);

	while(++cnt < n){
		odd_sum  += j += 2;
		even_sum += i += 2;
	}
	printf("%10d%10d%10d\n", n, odd_sum, even_sum);

	return 0;
}

