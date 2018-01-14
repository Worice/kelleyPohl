/* Exercise 2.16
 * First complete the entries in the table that follows. After you have done this, 
 * write a program to check that the values you entered are correct. Explain the 
 * error in the last expression in the table. Is it a compile-time error or a 
 * run-time error?
 *
 */

#include<stdio.h>

int main(int argc, char *argv[]){
	int a = 2, b = -3, c = 5, d = -7, e = 11;

	printf("\n\"a / b / c = %d\" is equivalent to \"(a / b) / c = %d\"\n",
			a / b / c, (a / b) / c);
	printf("\n\"7 + c * -- d / e = %d\" is equivalent to \"7 + ((c * (-- d)) / e) = %d\"\n",
			7 + c * -- d / e, 7 + ((c * (-- d)) / e) );
	printf("\n\"2 * a %% - b + c + 1 = %d\" is equivalent to \"(2 * a) %% (- b) + c + 1 = %d\"\n",
			2 * a % - b + c + 1, (2 * a) % (- b) + c + 1);
	printf("\n\"39 / - ++ e - + 29 %% c = %d\" is equivalent to \"(39 / (- (++ e))) - ((+ 29) %% c) = %d\"\n",
			39 / - ++ e - + 29 % c, (39 / (- (++ e))) - ((+ 29) % c)); 
	printf("\n\"a += b += c += 1 + 2 = %d\" is equivalent to \"a += (b += (c += (1 + 2))) = %d\"\n", 
		a += b += c += 1 + 2, a += (b += (c += (1 + 2))));	
	printf("\n\"7 - + ++ a %% (3 + b) = %d\" is equivalent to \"7 - ((+ (++ a)) %% (3 + b)) = %d\"\n\n"
		"According to the textbook, the first expression ought throw\n"
		"an error at compile or run time. Actually, nothing happens.\n"
		"Perhaps, a recent change in priority or association rules?\n\n", 
			7 - + ++ a % (3 + b), 7 - (((+ (++ a)) % (3 + b))));

	return 0;

}
