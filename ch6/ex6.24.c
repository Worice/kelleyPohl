/* Esercizio 6.24 */

#include<stdio.h>

void f(int *a);

int main(){
	char s[] = "deep in the heart of texas";
	char *p  = "deep in the heart of texas";
	int a[3];
	double d[5];

	printf("%s%d\n%s%d\n%s%d\n%s%d\n",
		"sizeof(s) = ", sizeof(s),
		"sizeof(p) = ", sizeof(p),
		"sizeof(a) = ", sizeof(a),
		"sizeof(d) = ", sizeof(d));

	f(a);
	
	printf("\n1) sizeof(s) = 27: The length of the string including\n" 
		"NUL-terminator. Note that sizeof(char) is 1 by the standard."

		"\n\n2) sizeof(p) = 8: The size of a char* on your system."
		
		"\n\n3) sizeof(a) = 12: in main, yes that's the number of elements in" 
		"\nthe array multiplied by the size of each element. From this we can" 
		"\ninfer that sizeof(int) is 4."

		"\n\n4) sizeof(d) = 40: sizeof(double) multiplied by the number of" 
		"\nelements."


		"\n\nIn the function f, the array passed has decayed to a pointer type." 
		"\nMost likely sizeof(a) will be 8. The standard does not insist that" 
		"\nsizeof(char*) is the same as sizeof(int*) but I've never come" 
		"\nacross a desktop PC where that is not the case.\n\n");
	
	return 0;
}

void f(int *a){
	printf("In f(): sizeof(a) = %d\n", sizeof(a));
}
