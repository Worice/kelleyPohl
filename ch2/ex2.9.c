/* Exercise 2.9 
 * Write an interactive program that converts pounds and ounces to 
 * kilograms and grams. Use symbolic constants that are defined at the 
 * top of the file outside of main.
 */ 

#include<stdio.h>
#define POUND_KILOS 0.453592
#define OUNCES_GRAMS 28.3495


int main(int argc, char *argv[]){
	float p, o;		/*p = pounds, o = ounces */
	printf("\nHow many pounds do you want to convert in Kgs?\n");
	while(scanf("%f", &p) != 1);
	printf("\n%.2f pounds are %.2f kilograms.\n", p, p * POUND_KILOS);
	printf("\nAnd now, how many ounces do you want to convert\n"
		"in grams?\n");
	while(scanf("%f", &o) != 1);
	printf("\n%.2f ounces are %.2f grams.\n", o, o * OUNCES_GRAMS);
	return 0;
}


