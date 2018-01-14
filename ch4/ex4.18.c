/* Exercise 4.18
 *
 * Choose one version of the program that you wrote in exercise 16, on page 188, and
 * incorporate into it the following piece of code:
 *
 *      do {  
 *         printf("Input a positive integer: ");
 *             seanf("%d", &n);
 *                 if (error = (n <= 0))
 *                     printf("\nERROR: Do it again!\n\n");
 *      } while (error); 
 *
 * Then write another version of the program that uses a while statement instead of a
 * do statement to accomplish the same effect.
 *
 */

#include<stdio.h>

int main(int argc, char *argv[]){
        int n, m = 0, error = 0;
        int cnt = 0, i, j, odd_sum = 0, even_sum = 0;

	do {
                printf("Input a positive integer: ");
                scanf("%d", &n);
                if (error = (n <= 0))
                        printf("\nERROR: Do it again!\n\n");
         } while (error);

	while(m <= 0){
		printf("Input a positive integer: ");
                scanf("%d", &m);
		if (m <= 0)
			printf("\nERROR: Do it again!\n\n");
	}

	 printf("\nThe numbers finally choosen are %d and %d. I cannot really comprehend why\n"
                 "the reference to the exercise 4.16. It does not require any kind of\n"
                 "input. Because of that, I will adapt the exercise 4.17 instead,\n"
                 "counting the sum of the even and odd number up to the n of the input.\n\n", n, m);

	 printf("%10s%12s%12s\n", "N", "Odd sum", "Even sum");

	 for(i = 1; ++cnt <= n; i += 2)
   		 odd_sum += i;
	 cnt = 0;
	 for(j = 2; ++cnt <= n; j += 2)
		 even_sum += j;
         printf("\n%10d%12d%12d\n\n", n, odd_sum, even_sum);

         for(i = 1; ++cnt <= m; i += 2)
                  odd_sum += i;
         cnt = 0; even_sum = 0;
         for(j = 2; ++cnt <= m; j += 2)
                  even_sum += j;
	 printf("\n%10d%12d%12d\n\n", m, odd_sum, even_sum);

	 return 0;
}

