/* Kelley & Pohl, 1998. "A book on C." Excercises from chapter one."*/

#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#define DIM 100

/*1) -------------------------------------------------------------

On the screen write the words:
"she sells sea shells by the seashore" (no virgolette)
(a) all on one line, (b) on three lines, (c) inside a box.*/

void ex1(){
	char s[DIM], *p;
	int op, i, len = 0;				/*output option, strin length*/
	strcpy(s, "she sells sea shells by the seashore"); 
	printf("On the screen write the words:\n"
		"she sells sea shells by the seashore\n\n"
		"\t1) all on one line;\n"
		"\t2) on three lines;\n"
		"\t3) inside a box.\n");
	scanf("%d", &op);
	if(op == 1)
		printf("%s\n\n", s);
	else if(op == 2){
		p = s + 22;
		for( ; *p != '\0'; ++p){
			if(*p == ' ')
				*p = '\n';
		}
		printf("%s\n\n", s);
	}
	else if(op == 3){
		p = s;
		for( ; *p != '\0'; ++p)
			len += 1;
		for(i = 0; i <= len + 3; ++i)
			printf("*");
		printf("\n");
		printf("* %s *\n", s);
		for(i = 0; i <= len + 3; ++i)
			printf("*");
		printf("\n\n");
	}
	else{
		printf("\nWrong selection. Exit program.\n");
		exit(0);

	}
}	

/*2) ------------------------------------------------------------------
Use a hand calculator to verify that the output of the marathon program is correct.
Create another version of the program by changing the floating constant 1760.0 to
an integer constant 1760. Compile and execute the program and notice that the out-
put is not the same as before. This is because integer division discards any frac-
tional part.*/

void ex2(){
	int miles, yards;
	float kilometers;
	miles = 26;
	yards = 385;
	kilometers = 1.609 * (miles + yards / 1760);	/*1760 from float to int*/
	printf("\nA marathon is %f kilometers.\n", kilometers);
	printf("With 1760.0, the result was 42.185970.\n"
		"The integer division discards any fractional part.\n\n");
}

/* 3) ---------------------------------------------------------------------

Write a version of the marathon program in Section 1.3, "Variables, Expressions,
and Assignment," on page 11, in which all constants and variables are of type dou-
ble. Is the output of the program exactly the same as that of the original 
program?*/

void ex3(){
        double miles, yards;
        double kilometers;
        miles = 26.;
        yards = 385.;
        kilometers = 1.609 * (miles + yards / 1760.);    /*1760 from float to int*/
        printf("\nA marathon is %lf kilometers.\n", kilometers);
        printf("With float and int, the result was 42.185970.\n\n");
}




/*Main progran ------------------------------------------------------------*/
int main(int argc, char *argv[]){
	int ex;
	printf("\n>This script will try to reproduce the excercises from\n"
		">the first chapter. Enjoy and comment!\n\n");
	do{
		printf(">Select the excercise you do want to run:\n"
		">\t1\tExercise 1\n"
                ">\t2\tExercise 2\n"
		">\t3\tExercise 3\n");
		scanf("%d", &ex);
		if(ex == 1)
			ex1();
		else if(ex == 2)
			ex2();
		else if(ex == 3)
			ex3();
	}while(ex > 0 && ex < 4);
	return 0;

}
