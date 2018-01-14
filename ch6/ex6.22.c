/* Esercizio 6.22 */

#include<stdio.h>

int main(){
    	printf("%c%c%c%c%c!\n",
	       "ghi"[1], *("def" + 1),
		*"abc" + 11, "klm"[1], *"ghi" + 8);
	printf("\n\"ghi\"[1]:\tvalue of the array of char 'g', 'h', 'i' in position [1],"
		"\n\t\tthat is, 'h';"
		"\n*(\"def\" + 1):\tdereferentiated value of an array, such as for *(array + 1)"
		"\n*\"abc\" + 11:\tdereferentiated value of the element at the base of the array,"
		"\n\t\tthat is 'a', in this case, incremented by 11. 'a' + 11 = 'l';"
		"\n\"klm\"[1]:\tvalue of the element in position [1] of the array;"
		"\n*\"ghi\" + 8:\t value of the dereferentiated base of the array, incremented"
		"\n\t\tby 8. 'g' + 8 = 'o'.\n\n");
	return 0;
}


