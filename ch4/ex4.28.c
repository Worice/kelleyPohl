/* Exercise 4.28
 *
 * In Section 4.8, "The while Statement," on page 165, we presented a program that
 * counts blanks, digits, and letters. Modify the program so that lower- and uppercase
 * letters are counted separately
 *
 */

#include<stdio.h>

int main(int argc, char *argv[]){

	int c;
	int blk, dgt, lcl, ucl, oth; 	/* Blanks, digits, lowecase letters, uppercase letters*/
	blk = dgt = lcl = ucl = oth = 0;

	printf("\n%10s%10s%10s%10s%10s\n%10s%10s%+10s%+10s%10s\n",
		"Blanks", "Digits", "Lower", "Upper", "Other", 
		" ", " ", "case", "case", " ");	
	
	while((c = getchar()) != EOF){
		if(c > 47 && c < 57)
		       ++dgt;
		else if(c == ' ')
			++blk;
		else if(c > 64 && c < 91)
			++ucl;
		else if(c > 96 && c < 123)
			++lcl;
		else
			++oth;	
	}

	printf("\n%10d%10d%10d%10d%10d\n\n",
		blk, dgt, lcl, ucl, oth);

	return 0;
}
